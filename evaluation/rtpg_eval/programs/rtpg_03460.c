int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 61;
    int v1 = 30;
    int v2 = 5;
    int v3 = 93;
    int v4 = 8;
    int v5 = 17;
    int i;
    v1 = v1 * 10;
    v4 = v4 + v3;
    v2 = __helper(v2);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
