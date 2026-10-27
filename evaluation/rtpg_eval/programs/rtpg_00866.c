int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 47;
    int v2 = 34;
    int v3 = 64;
    int v4 = 20;
    int v5 = 79;
    int v6 = 76;
    int i;
    for (i = 0; i < 10; i++) {
        v3 = v3 + v3;
    }
    if (v5 > v1) { v5 = v1; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v3 = __helper(v3);
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
