int __arr_7248[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 64;
    int v2 = 53;
    int v3 = 75;
    int i;
    for (i = 0; i < 10; i++) { __arr_7248[i] = v3 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
