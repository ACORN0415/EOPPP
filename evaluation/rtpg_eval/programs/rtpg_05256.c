int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5256[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 70;
    int v2 = 67;
    int v3 = 46;
    int v4 = 49;
    int i;
    for (i = 0; i < 10; i++) { __arr_5256[i] = v1 + i; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v1 = __helper(v1);
    v1 = v1 & v4;
    return v0;
}
int main(void) { return test_func(); }
