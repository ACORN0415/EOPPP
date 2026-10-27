int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 28;
    int v2 = 59;
    int v3 = 73;
    int v4 = 22;
    int v5 = 64;
    int i;
    v4 = v4 * 5;
    v3 = __arr_didx[__idx_didx[0]];
    v1 = v1 & v4;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
