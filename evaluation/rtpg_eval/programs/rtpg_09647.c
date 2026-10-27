int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9647[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 64;
    int v2 = 78;
    int i;
    for (i = 0; i < 10; i++) { __arr_9647[i] = v1 + i; }
    v2 = __helper(v2);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
