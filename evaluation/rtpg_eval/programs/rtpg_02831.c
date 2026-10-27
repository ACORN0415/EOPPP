int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 70;
    int v1 = 6;
    int v2 = 66;
    int v3 = 2;
    int v4 = 6;
    int v5 = 22;
    int i;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = v1 | v2;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
