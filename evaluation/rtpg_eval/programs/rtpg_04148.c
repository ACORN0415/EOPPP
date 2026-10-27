int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 26;
    int v2 = 12;
    int v3 = 60;
    int v4 = 88;
    int v5 = 58;
    int v6 = 63;
    int v7 = 53;
    int i;
    for (i = 0; i < 14; i++) {
        v6 = v6 + v0;
    }
    if (v4 > v2) { v4 = v2; }
    v3 = v3 ^ v0;
    v1 = __arr_didx[__idx_didx[0]];
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
