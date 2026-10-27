int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 49;
    int v1 = 8;
    int v2 = 0;
    int v3 = 63;
    int v4 = 54;
    int v5 = 41;
    int v6 = 77;
    int v7 = 28;
    int i;
    if (v6 > v3) { v6 = v3; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v6 = __helper(v6);
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
