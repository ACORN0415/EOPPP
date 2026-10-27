int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 37;
    int v2 = 26;
    int v3 = 61;
    int v4 = 14;
    int v5 = 31;
    int v6 = 79;
    int v7 = 95;
    int i;
    v1 = v1 + v0;
    v4 = __arr_didx[__idx_didx[0]];
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
