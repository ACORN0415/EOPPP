int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2465[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 20;
    int v2 = 55;
    int v3 = 59;
    int v4 = 69;
    int v5 = 58;
    int v6 = 51;
    int v7 = 26;
    int i;
    for (i = 0; i < 10; i++) { __arr_2465[i] = v1 + i; }
    for (i = 0; i < 16; i++) {
        v6 = v6 + v7;
    }
    v3 = v3 + v6;
    switch (v7) {
        case 0: v7 = 1; break;
        case 1: v7 = 2; break;
        default: v7 = 0; break;
    }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
