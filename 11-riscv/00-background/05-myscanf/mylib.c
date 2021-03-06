#include <stdio.h>
#include <stdlib.h> 
#include <stdarg.h>
#include <stdint.h>
#include "mylib.h"

int puts(const char *s) {
  const char *p = s;
	while (*p) putchar(*p++);
  return p-s;
}

char *gets(char *s) {
	char *p = s;
	while (1) {
		char ch = getchar();
		putchar(ch);
		if (ch == '\n' || ch == '\r') break;
		*p++ = ch;
	}
	*p = '\0';
	return s;
}

static char digits[] = "0123456789ABCDEF";

static char* printint(char *text, int xx, int base, int sgn) {
  char buf[16];
  int i, neg;
  unsigned int x;

  neg = 0;
  if(sgn && xx < 0){
    neg = 1;
    x = -xx;
  } else {
    x = xx;
  }

  i = 0;
  do {
    buf[i++] = digits[x % base];
  }while((x /= base) != 0);
  if(neg)
    buf[i++] = '-';

  char *p = text;
  while(--i >= 0)
    *p++ = buf[i];
	return p;
}

// Print to text. Only understands %d, %x, %s.
int vsprintf(char *text, const char *fmt, va_list vl) {
  char *s, *p=text;
  int c, i, state;

  state = 0;
  for(i = 0; fmt[i]; i++){
    c = fmt[i] & 0xff;
    if(state == 0){
      if(c == '%'){
        state = '%';
      } else {
				*p++ = c;
      }
    } else if(state == '%'){
      if(c == 'd'){
        p=printint(p, va_arg(vl, int), 10, 1);
      } else if(c == 'l') {
        p=printint(p, va_arg(vl, long), 10, 0);
      } else if(c == 'x') {
        p=printint(p, va_arg(vl, int), 16, 0);
      } else if(c == 's'){
        s = va_arg(vl, char*);
        if(s == 0)
          s = "(null)";
        while(*s != 0){
          *p++ = *s++;
        }
      } else if(c == 'c'){
				*p++ = va_arg(vl, unsigned int);
      } else if(c == '%'){
				*p++ = c;
      } else { // Unknown % sequence.  Print it to draw attention.
				*p++ = '%';
				*p++ = c;
      }
      state = 0;
    }
  }
	*p = '\0';
	return p-text;
}

int sprintf(char *text, const char *fmt, ...) {
  va_list vl;
  va_start(vl, fmt);
  int len = vsprintf(text, fmt, vl);
	puts(text);
	return len;
}

int printf(const char *fmt, ...) {
  va_list vl;
  va_start(vl, fmt);
  char text[TMAX];
  int len = vsprintf(text, fmt, vl);
	puts(text);
	return len;
}

int vsscanf1(const char *text, const char *fmt, va_list vl) {
 	const char *fp=fmt, *tp=text;
  char *s, *out_loc;;
  int ret=0;
 	while (fmt && *fp && *tp)	{
 	    if (*fp == '%') {
 	       fp++;
 	       switch (*fp) {
 	           case 's': 
               s = va_arg(vl, char*);
               while (*tp != ' ' && *tp != '\0') *s++=*tp++;
	 	           ret ++;
	 	           break;
 	           case 'c': 
	 	           *(char *)va_arg( vl, char* ) = *tp++;
	 	           ret ++;
	 	           break;
 	           case 'd': 
	 	           *(int *)va_arg( vl, int* ) =strtol(tp, &out_loc, 10);
	 	           tp = out_loc;
	 	           ret++;
	 	           break;
 	           case 'x': 
	 	           *(int *)va_arg( vl, int* ) =strtol(tp, &out_loc, 16);
	 	           tp =out_loc;
	 	           ret++;
	 	           break;
 	        }
 	    } 
 	    else 
        tp++;
      fp++;
    }
    return ret;
}

int sscanf(const char *text, const char *fmt, ...) {
  va_list vl;
  va_start(vl, fmt);
  return vsscanf1(text, fmt, vl);
}
