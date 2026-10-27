int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 64;
    int v1 = 74;
    int v2 = 98;
    int v3 = 36;
    int v4 = 21;
    int v5 = 91;
    int v6 = 56;
    int i;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v0;
    }
    v3 = v3 * 4;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
