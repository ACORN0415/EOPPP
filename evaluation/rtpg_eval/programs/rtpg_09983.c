int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 34;
    int v2 = 23;
    int v3 = 8;
    int v4 = 97;
    int v5 = 22;
    int v6 = 34;
    int v7 = 79;
    int i;
    v5 = 45;
    v5 = __helper(v5);
    v0 = __arr_didx[__idx_didx[0]];
    v7 = v7 & v2;
    return v0;
}
int main(void) { return test_func(); }
