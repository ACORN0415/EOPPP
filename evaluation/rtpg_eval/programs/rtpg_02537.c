int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 87;
    int v2 = 3;
    int v3 = 67;
    int v4 = 18;
    int i;
    v4 = v4 - v3;
    v1 = v1 * 9;
    if (v1 > v4) { v1 = v4; }
    v0 = __arr_didx[__idx_didx[0]];
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
