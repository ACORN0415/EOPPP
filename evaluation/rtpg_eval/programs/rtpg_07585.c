int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 99;
    int v1 = 24;
    int v2 = 75;
    int v3 = 0;
    int v4 = 24;
    int v5 = 94;
    int v6 = 47;
    int i;
    v4 = 78;
    if (v2 > v6) { v2 = v6; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
