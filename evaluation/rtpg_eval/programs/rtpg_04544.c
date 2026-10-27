int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4544[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 97;
    int v2 = 5;
    int v3 = 89;
    int v4 = 1;
    int v5 = 94;
    int v6 = 75;
    int v7 = 37;
    int i;
    for (i = 0; i < 10; i++) { __arr_4544[i] = v5 + i; }
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    v3 = __helper(v3);
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
