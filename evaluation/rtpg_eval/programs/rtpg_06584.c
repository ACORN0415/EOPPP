int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 56;
    int v2 = 34;
    int v3 = 19;
    int v4 = 61;
    int v5 = 76;
    int i;
    v4 = v4 - v0;
    for (i = 0; i < 18; i++) {
        v4 = v4 + v0;
    }
    v1 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
