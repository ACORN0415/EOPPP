int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 15;
    int v2 = 77;
    int v3 = 94;
    int v4 = 18;
    int v5 = 77;
    int v6 = 50;
    int v7 = 95;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v7;
    }
    if (v3 > v1) { v3 = v1; }
    v6 = 39;
    v3 = __arr_didx[__idx_didx[0]];
    v6 = __helper(v6);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
