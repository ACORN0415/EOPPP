int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 30;
    int v2 = 49;
    int v3 = 56;
    int v4 = 22;
    int v5 = 77;
    int v6 = 77;
    int i;
    v2 = 36;
    for (i = 0; i < 17; i++) {
        v6 = v6 + v1;
    }
    v3 = v3 - v2;
    v6 = __helper(v6);
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
