int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 39;
    int v2 = 83;
    int v3 = 1;
    int v4 = 46;
    int v5 = 81;
    int v6 = 72;
    int i;
    v5 = v5 * 9;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v3;
    }
    v4 = 4;
    v6 = __helper(v6);
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
