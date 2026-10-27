int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 14;
    int v1 = 16;
    int v2 = 42;
    int v3 = 27;
    int v4 = 1;
    int v5 = 41;
    int i;
    v4 = v4 + v4;
    v2 = v2 * 3;
    v0 = __helper(v0);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
