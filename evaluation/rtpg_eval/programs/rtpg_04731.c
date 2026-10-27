int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4731[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 31;
    int v2 = 13;
    int v3 = 35;
    int i;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v0;
    }
    v0 = 89;
    for (i = 0; i < 10; i++) { __arr_4731[i] = v3 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    v1 = __helper(v1);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
