int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6335[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 74;
    int v2 = 34;
    int v3 = 43;
    int v4 = 74;
    int v5 = 23;
    int v6 = 4;
    int i;
    for (i = 0; i < 10; i++) { __arr_6335[i] = v2 + i; }
    v2 = __arr_didx[__idx_didx[0]];
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
