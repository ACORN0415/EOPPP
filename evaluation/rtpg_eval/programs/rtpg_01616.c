int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 47;
    int v2 = 24;
    int v3 = 71;
    int v4 = 2;
    int v5 = 14;
    int i;
    v3 = v3 * 8;
    v0 = __helper(v0);
    v2 = v2 & v0;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
