int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 53;
    int v1 = 17;
    int v2 = 74;
    int v3 = 16;
    int v4 = 69;
    int v5 = 87;
    int i;
    v3 = v3 * 6;
    v1 = __helper(v1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
