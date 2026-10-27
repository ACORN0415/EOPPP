int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 33;
    int v1 = 38;
    int v2 = 1;
    int v3 = 96;
    int i;
    v0 = __helper(v0);
    v0 = v0 | v3;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
