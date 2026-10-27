int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 20;
    int v1 = 11;
    int v2 = 71;
    int v3 = 8;
    int v4 = 42;
    int v5 = 16;
    int v6 = 69;
    int v7 = 24;
    int i;
    v2 = v2 + v3;
    v6 = __helper(v6);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
