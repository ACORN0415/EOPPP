int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 91;
    int v2 = 36;
    int v3 = 27;
    int i;
    if (v3 > v1) { v3 = v1; }
    v0 = v0 * 3;
    v0 = __arr_didx[__idx_didx[0]];
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
