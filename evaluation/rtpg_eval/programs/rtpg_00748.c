int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 86;
    int v1 = 72;
    int v2 = 24;
    int v3 = 91;
    int v4 = 46;
    int v5 = 41;
    int v6 = 38;
    int i;
    v6 = v6 - v3;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v6;
    }
    if (v3 > v0) { v3 = v0; }
    v1 = __helper(v1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
