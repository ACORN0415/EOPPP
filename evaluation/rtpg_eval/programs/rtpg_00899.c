int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 79;
    int v1 = 75;
    int v2 = 69;
    int v3 = 49;
    int v4 = 89;
    int v5 = 48;
    int v6 = 37;
    int i;
    v6 = v6 + v3;
    v6 = v6 - v4;
    v4 = v4 / (v0 + 1);
    int *__p = &v0;
    *__p = *__p + 1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
