int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 49;
    int v1 = 71;
    int v2 = 89;
    int v3 = 34;
    int v4 = 32;
    int v5 = 46;
    int v6 = 5;
    int v7 = 76;
    int i;
    if (v6 > v7) { v6 = v7; }
    v7 = __arr_didx[__idx_didx[0]];
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
