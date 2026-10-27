int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 55;
    int v1 = 3;
    int v2 = 49;
    int v3 = 50;
    int v4 = 80;
    int v5 = 21;
    int i;
    v2 = v2 * 7;
    v0 = __helper(v0);
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
