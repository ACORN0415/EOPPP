int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 66;
    int v1 = 43;
    int v2 = 68;
    int v3 = 17;
    int v4 = 78;
    int v5 = 48;
    int i;
    v1 = v1 * 4;
    v0 = v0 - v1;
    v5 = v5 + v5;
    v5 = __helper(v5);
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
