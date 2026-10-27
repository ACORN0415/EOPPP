int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 77;
    int v1 = 85;
    int v2 = 5;
    int v3 = 38;
    int v4 = 69;
    int v5 = 26;
    int v6 = 20;
    int v7 = 90;
    int i;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v7;
    }
    v0 = v0 - v4;
    v7 = 75;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
