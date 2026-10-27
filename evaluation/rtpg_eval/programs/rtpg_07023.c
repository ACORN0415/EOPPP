int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 31;
    int v2 = 47;
    int v3 = 58;
    int v4 = 60;
    int v5 = 14;
    int v6 = 24;
    int i;
    if (v0 > v0) { v0 = v0; }
    v2 = 39;
    v1 = v1 * 8;
    v2 = v2 & v6;
    v4 = __arr_didx[__idx_didx[0]];
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
