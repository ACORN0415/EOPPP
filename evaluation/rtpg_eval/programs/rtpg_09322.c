int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 76;
    int v1 = 63;
    int v2 = 86;
    int v3 = 6;
    int v4 = 82;
    int v5 = 38;
    int v6 = 26;
    int v7 = 58;
    int i;
    for (i = 0; i < 14; i++) {
        v7 = v7 + v6;
    }
    v7 = v7 - v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v5 = __helper(v5);
    v6 = v6 & v2;
    return v0;
}
int main(void) { return test_func(); }
