int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 43;
    int v1 = 11;
    int v2 = 86;
    int v3 = 11;
    int v4 = 54;
    int v5 = 90;
    int i;
    if (v3 > v2) { v3 = v2; }
    v5 = __helper(v5);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
