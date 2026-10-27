int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 36;
    int v1 = 88;
    int v2 = 99;
    int v3 = 39;
    int i;
    v1 = v1 * 5;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
