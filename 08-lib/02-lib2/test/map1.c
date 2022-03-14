void map(void *a, void* (*f)(void*), int n, void *r) {
    for (int i=0; i<n; i++) {
        r[i] = f(a[i]);
    }
}

void* f(void* p) {
    int x = (int) p;
    return x*x;
}

int main() {
    int a[] = {1,2,3}, b[3];
    map(a, f, 3, b);
}
