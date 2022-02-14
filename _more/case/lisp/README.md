# lisp

## cpp

* https://gist.github.com/ofan/721464

Lisp interpreter in 90 lines of C++

I've enjoyed reading Peter Norvig's recent articles on Lisp. He implements a Scheme interpreter in 90 lines of Python in the first, and develops it further in the second.

Just for fun I wondered if I could write one in C++. My goals would be

1. A Lisp interpreter that would complete Peter's Lis.py test cases correctly...
2. ...in no more than 90 lines of C++.
Although I've been thinking about this for a few weeks, as I write this I have not written a line of the code. I'm pretty sure I will achieve 1, and 2 will be... a piece of cake!
In one short line of Python Mr. Norvig implements Lisp functions car, cdr and append. Another line and we've done the four basic mathematical operators on bignums. Gulp.

To give myself any sort of chance I don't intend to support bignums, garbage collection or error handling and I'm only going to implement the bare minimum to pass the test cases.

. . .

OK, I've done it. Here it is:

## python

* https://github.com/ridwanmsharif/lispy/tree/master/rlispy