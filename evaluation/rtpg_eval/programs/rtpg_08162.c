int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 23;
    int v1 = 43;
    int v2 = 14;
    int v3 = 33;
    int v4 = 8;
    int v5 = 28;
    int v6 = 80;
    int v7 = 21;
    int i;
    v7 = 40;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v7;
    }
    v2 = __helper(v2);
    int *__p = &v6;
    *__p = *__p + 1;
    v1 = v1 | v4;
    return v0;
}
int main(void) { return test_func(); }
