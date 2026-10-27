int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 81;
    int v2 = 79;
    int v3 = 84;
    int v4 = 50;
    int i;
    v3 = 100;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = __arr_didx[__idx_didx[0]];
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
