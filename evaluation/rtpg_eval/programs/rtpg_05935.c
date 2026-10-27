int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5935[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 87;
    int v2 = 99;
    int v3 = 2;
    int v4 = 30;
    int v5 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_5935[i] = v1 + i; }
    v3 = v3 - v1;
    v1 = __helper(v1);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
