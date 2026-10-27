int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 87;
    int v1 = 38;
    int v2 = 58;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v0;
    }
    v0 = __helper(v0);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
