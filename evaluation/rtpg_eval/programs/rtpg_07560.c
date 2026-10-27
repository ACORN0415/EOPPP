int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 17;
    int v2 = 91;
    int v3 = 94;
    int v4 = 38;
    int v5 = 15;
    int v6 = 75;
    int i;
    v0 = 57;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v4;
    }
    v6 = v6 + v4;
    v0 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
