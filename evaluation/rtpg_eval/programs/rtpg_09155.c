int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 17;
    int v1 = 30;
    int v2 = 17;
    int v3 = 12;
    int v4 = 92;
    int v5 = 78;
    int v6 = 31;
    int v7 = 2;
    int i;
    v6 = v6 - v2;
    int *__p = &v6;
    *__p = *__p + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
