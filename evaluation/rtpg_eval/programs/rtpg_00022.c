int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_22[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 16;
    int v2 = 70;
    int v3 = 47;
    int v4 = 96;
    int v5 = 54;
    int i;
    for (i = 0; i < 10; i++) { __arr_22[i] = v4 + i; }
    v5 = __helper(v5);
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
