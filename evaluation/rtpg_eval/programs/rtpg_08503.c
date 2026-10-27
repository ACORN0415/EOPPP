int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8503[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 25;
    int v2 = 40;
    int v3 = 30;
    int v4 = 33;
    int i;
    if (v3 > v0) { v3 = v0; }
    for (i = 0; i < 10; i++) { __arr_8503[i] = v4 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v3 = __helper(v3);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
