int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 9;
    int v1 = 90;
    int v2 = 92;
    int v3 = 70;
    int v4 = 38;
    int v5 = 69;
    int v6 = 3;
    int v7 = 41;
    int i;
    for (i = 0; i < 9; i++) {
        v5 = v5 + v6;
    }
    v3 = 62;
    int *__p = &v1;
    *__p = *__p + 1;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
