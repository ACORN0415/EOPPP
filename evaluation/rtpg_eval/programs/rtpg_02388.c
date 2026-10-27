int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 91;
    int v1 = 100;
    int v2 = 41;
    int v3 = 66;
    int v4 = 74;
    int v5 = 91;
    int i;
    v5 = v5 * 6;
    v4 = __helper(v4);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
