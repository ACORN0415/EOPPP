int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 84;
    int v2 = 51;
    int v3 = 4;
    int v4 = 48;
    int v5 = 76;
    int i;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v0;
    }
    v4 = __helper(v4);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
