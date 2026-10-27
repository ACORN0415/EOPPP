int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 95;
    int v2 = 74;
    int v3 = 25;
    int v4 = 28;
    int v5 = 74;
    int i;
    v1 = v1 * 2;
    v3 = __arr_didx[__idx_didx[0]];
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
