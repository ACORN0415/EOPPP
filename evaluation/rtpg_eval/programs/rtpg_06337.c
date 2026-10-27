int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 16;
    int v2 = 67;
    int v3 = 86;
    int v4 = 32;
    int v5 = 34;
    int i;
    v3 = v3 - v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __arr_didx[__idx_didx[0]];
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
