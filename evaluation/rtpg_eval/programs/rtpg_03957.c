int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 39;
    int v1 = 72;
    int v2 = 82;
    int v3 = 62;
    int v4 = 53;
    int v5 = 30;
    int i;
    v2 = v2 * 6;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v2;
    *__p = *__p + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
