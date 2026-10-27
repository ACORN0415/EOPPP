int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8014[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 18;
    int v2 = 47;
    int v3 = 38;
    int v4 = 50;
    int v5 = 86;
    int v6 = 12;
    int v7 = 86;
    int i;
    for (i = 0; i < 10; i++) { __arr_8014[i] = v2 + i; }
    v4 = 54;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v5 = __helper(v5);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
