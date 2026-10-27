int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 58;
    int v1 = 18;
    int v2 = 18;
    int v3 = 92;
    int v4 = 56;
    int v5 = 11;
    int v6 = 49;
    int i;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v3;
    }
    v3 = __helper(v3);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
