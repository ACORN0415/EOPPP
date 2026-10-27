int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 33;
    int v1 = 14;
    int v2 = 96;
    int v3 = 2;
    int v4 = 87;
    int i;
    for (i = 0; i < 9; i++) {
        v4 = v4 + v4;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    v0 = v0 / (v2 + 1);
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
