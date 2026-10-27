int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 30;
    int v2 = 57;
    int v3 = 31;
    int v4 = 14;
    int v5 = 16;
    int v6 = 53;
    int i;
    v5 = v5 * 3;
    v0 = 13;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v0;
    }
    v2 = __arr_didx[__idx_didx[0]];
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
