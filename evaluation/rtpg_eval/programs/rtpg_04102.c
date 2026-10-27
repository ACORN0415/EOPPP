int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 55;
    int v2 = 29;
    int v3 = 31;
    int v4 = 22;
    int v5 = 2;
    int v6 = 10;
    int v7 = 0;
    int i;
    v5 = __helper(v5);
    v7 = __arr_didx[__idx_didx[0]];
    v7 = v7 ^ v0;
    return v0;
}
int main(void) { return test_func(); }
