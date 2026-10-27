int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 18;
    int v2 = 11;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v1;
    }
    v0 = __arr_didx[__idx_didx[0]];
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
