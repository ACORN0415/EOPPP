int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 55;
    int v1 = 49;
    int v2 = 33;
    int v3 = 40;
    int v4 = 75;
    int v5 = 68;
    int i;
    v3 = v3 * 4;
    if (v5 > v5) { v5 = v5; }
    v0 = __helper(v0);
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
