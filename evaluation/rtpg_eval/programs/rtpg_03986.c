int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 77;
    int v2 = 60;
    int v3 = 78;
    int v4 = 24;
    int v5 = 88;
    int v6 = 73;
    int i;
    v6 = 9;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v1;
    }
    v3 = __helper(v3);
    v2 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
