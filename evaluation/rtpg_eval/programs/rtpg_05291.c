int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 0;
    int v1 = 83;
    int v2 = 86;
    int v3 = 23;
    int v4 = 29;
    int i;
    if (v2 > v0) { v2 = v0; }
    v1 = v1 + v1;
    v0 = v0 * 2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
