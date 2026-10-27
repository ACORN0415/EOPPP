int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_237[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 84;
    int v2 = 68;
    int v3 = 7;
    int v4 = 54;
    int v5 = 52;
    int v6 = 28;
    int i;
    for (i = 0; i < 10; i++) { __arr_237[i] = v2 + i; }
    v1 = v1 + v2;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v1;
    }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
