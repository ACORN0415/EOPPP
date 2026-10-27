int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 90;
    int v2 = 87;
    int v3 = 38;
    int v4 = 42;
    int v5 = 73;
    int v6 = 4;
    int v7 = 10;
    int i;
    v6 = 100;
    if (v3 > v5) { v3 = v5; }
    v5 = __helper(v5);
    v6 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
