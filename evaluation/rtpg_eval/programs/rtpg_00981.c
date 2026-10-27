int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 63;
    int v2 = 42;
    int v3 = 8;
    int v4 = 71;
    int i;
    v1 = v1 * 6;
    v1 = __arr_didx[__idx_didx[0]];
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
