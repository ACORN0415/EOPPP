int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 78;
    int v1 = 80;
    int v2 = 47;
    int v3 = 29;
    int v4 = 88;
    int v5 = 95;
    int v6 = 23;
    int i;
    v0 = v0 + v1;
    v4 = v4 - v1;
    int *__p = &v0;
    *__p = *__p + 1;
    v1 = __helper(v1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
