int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1962[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 75;
    int v2 = 87;
    int v3 = 97;
    int v4 = 22;
    int v5 = 61;
    int v6 = 4;
    int i;
    for (i = 0; i < 10; i++) { __arr_1962[i] = v4 + i; }
    v4 = v4 - v5;
    v3 = v3 + v3;
    v6 = __arr_didx[__idx_didx[0]];
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
