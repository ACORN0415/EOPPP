int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5929[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 10;
    int v2 = 4;
    int v3 = 51;
    int v4 = 95;
    int v5 = 62;
    int v6 = 85;
    int i;
    for (i = 0; i < 10; i++) { __arr_5929[i] = v3 + i; }
    v1 = __helper(v1);
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
