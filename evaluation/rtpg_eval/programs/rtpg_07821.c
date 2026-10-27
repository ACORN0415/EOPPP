int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7821[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 2;
    int v2 = 24;
    int v3 = 29;
    int i;
    for (i = 0; i < 10; i++) { __arr_7821[i] = v2 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
