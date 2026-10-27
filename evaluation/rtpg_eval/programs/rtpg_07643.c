int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7643[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 16;
    int v2 = 99;
    int v3 = 58;
    int v4 = 4;
    int v5 = 82;
    int v6 = 26;
    int i;
    for (i = 0; i < 10; i++) { __arr_7643[i] = v1 + i; }
    v6 = 67;
    v6 = __arr_didx[__idx_didx[0]];
    v0 = __helper(v0);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
