int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 86;
    int v1 = 86;
    int v2 = 35;
    int v3 = 86;
    int v4 = 91;
    int v5 = 56;
    int i;
    v2 = v2 + v4;
    v1 = 87;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
