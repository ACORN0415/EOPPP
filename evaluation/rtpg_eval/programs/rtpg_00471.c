int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 92;
    int v2 = 10;
    int v3 = 13;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v3;
    }
    v1 = 32;
    v0 = v0 | v2;
    v1 = __helper(v1);
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
