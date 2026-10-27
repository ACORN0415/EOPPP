int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 79;
    int v2 = 66;
    int i;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v2;
    }
    v0 = __arr_didx[__idx_didx[0]];
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
