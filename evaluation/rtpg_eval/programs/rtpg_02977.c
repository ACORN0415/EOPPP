int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2977[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 6;
    int v2 = 96;
    int v3 = 36;
    int i;
    for (i = 0; i < 10; i++) { __arr_2977[i] = v2 + i; }
    if (v3 > v2) { v3 = v2; }
    v2 = __arr_didx[__idx_didx[0]];
    v1 = __helper(v1);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
