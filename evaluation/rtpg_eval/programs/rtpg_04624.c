int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 22;
    int v1 = 57;
    int v2 = 2;
    int v3 = 9;
    int v4 = 75;
    int i;
    if (v1 > v4) { v1 = v4; }
    v3 = v3 * 9;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v4;
    }
    v2 = __helper(v2);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
