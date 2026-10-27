int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 10;
    int v2 = 88;
    int v3 = 86;
    int v4 = 46;
    int v5 = 31;
    int v6 = 30;
    int v7 = 1;
    int i;
    v5 = v5 * 4;
    v3 = __arr_didx[__idx_didx[0]];
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
