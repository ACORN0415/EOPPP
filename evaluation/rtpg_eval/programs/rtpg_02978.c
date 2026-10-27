int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 89;
    int v1 = 80;
    int v2 = 20;
    int v3 = 73;
    int v4 = 85;
    int v5 = 88;
    int i;
    if (v2 > v4) { v2 = v4; }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v3 = __helper(v3);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
