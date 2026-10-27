int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 24;
    int v1 = 87;
    int v2 = 2;
    int v3 = 85;
    int v4 = 2;
    int v5 = 39;
    int v6 = 97;
    int i;
    v5 = v5 + v0;
    v5 = v5 * 5;
    v2 = v2 - v3;
    v0 = __helper(v0);
    int *__p = &v3;
    *__p = *__p + 1;
    v5 = v5 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
