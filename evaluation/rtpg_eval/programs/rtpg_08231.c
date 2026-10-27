int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8231[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 26;
    int v2 = 13;
    int v3 = 14;
    int v4 = 41;
    int v5 = 13;
    int v6 = 14;
    int i;
    for (i = 0; i < 10; i++) { __arr_8231[i] = v0 + i; }
    v5 = v5 + v2;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    v5 = v5 ^ v3;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
