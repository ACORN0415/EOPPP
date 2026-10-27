int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 9;
    int v2 = 58;
    int v3 = 36;
    int v4 = 30;
    int v5 = 89;
    int v6 = 61;
    int i;
    v3 = v3 + v1;
    v3 = v3 * 3;
    v6 = __helper(v6);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
