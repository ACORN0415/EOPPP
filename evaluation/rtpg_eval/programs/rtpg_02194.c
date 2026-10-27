int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 47;
    int v1 = 55;
    int v2 = 63;
    int v3 = 69;
    int v4 = 92;
    int v5 = 74;
    int v6 = 3;
    int i;
    v3 = v3 - v5;
    v1 = 3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __helper(v0);
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
