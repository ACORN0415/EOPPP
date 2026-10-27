int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 89;
    int v1 = 6;
    int v2 = 0;
    int v3 = 48;
    int v4 = 77;
    int v5 = 49;
    int v6 = 56;
    int i;
    v3 = v3 - v2;
    v5 = v5 * 5;
    v6 = v6 + v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
