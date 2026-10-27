int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7759[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 22;
    int v2 = 64;
    int i;
    for (i = 0; i < 10; i++) { __arr_7759[i] = v2 + i; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
