int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 0;
    int v2 = 83;
    int i;
    v1 = v1 - v2;
    v1 = 52;
    v0 = __arr_didx[__idx_didx[0]];
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
