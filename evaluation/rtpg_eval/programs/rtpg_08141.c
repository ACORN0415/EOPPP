int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 97;
    int v2 = 38;
    int v3 = 66;
    int v4 = 50;
    int v5 = 44;
    int v6 = 59;
    int i;
    for (i = 0; i < 10; i++) {
        v6 = v6 + v5;
    }
    v5 = v5 * 2;
    v1 = 79;
    v5 = __helper(v5);
    float __f = 1.5f;
    __f = __f + 1.0f;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
