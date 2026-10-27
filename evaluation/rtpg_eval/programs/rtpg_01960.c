int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 6;
    int v2 = 57;
    int v3 = 5;
    int v4 = 11;
    int v5 = 61;
    int v6 = 61;
    int i;
    if (v6 > v4) { v6 = v4; }
    v4 = 66;
    v4 = v4 * 5;
    v0 = __helper(v0);
    v2 = __arr_didx[__idx_didx[0]];
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
