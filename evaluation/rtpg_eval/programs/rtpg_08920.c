int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 44;
    int v1 = 40;
    int v2 = 29;
    int v3 = 32;
    int v4 = 26;
    int v5 = 45;
    int i;
    v5 = v5 + v4;
    v1 = v1 * 3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
