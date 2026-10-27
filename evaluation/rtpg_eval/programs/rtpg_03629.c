int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 47;
    int v1 = 100;
    int v2 = 53;
    int v3 = 61;
    int v4 = 4;
    int v5 = 58;
    int i;
    v5 = v5 * 10;
    v5 = v5 + v4;
    v1 = 55;
    v0 = __helper(v0);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
