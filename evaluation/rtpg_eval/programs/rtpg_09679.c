int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 44;
    int v1 = 24;
    int v2 = 64;
    int v3 = 45;
    int v4 = 34;
    int i;
    v4 = v4 * 3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
