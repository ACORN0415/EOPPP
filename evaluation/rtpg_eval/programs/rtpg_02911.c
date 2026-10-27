int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2911[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 83;
    int v2 = 54;
    int v3 = 25;
    int v4 = 96;
    int v5 = 18;
    int v6 = 19;
    int v7 = 3;
    int i;
    v4 = 23;
    for (i = 0; i < 10; i++) { __arr_2911[i] = v7 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __helper(v0);
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
