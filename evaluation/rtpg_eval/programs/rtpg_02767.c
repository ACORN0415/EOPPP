int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 94;
    int v2 = 63;
    int v3 = 11;
    int v4 = 37;
    int i;
    v1 = v1 - v2;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v2 = __arr_didx[__idx_didx[0]];
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
