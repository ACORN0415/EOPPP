int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 69;
    int v2 = 51;
    int v3 = 80;
    int v4 = 33;
    int i;
    for (i = 0; i < 16; i++) {
        v1 = v1 + v1;
    }
    if (v0 > v3) { v0 = v3; }
    v2 = __helper(v2);
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
