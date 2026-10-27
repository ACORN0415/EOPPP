int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 60;
    int v1 = 92;
    int v2 = 96;
    int v3 = 8;
    int v4 = 12;
    int i;
    v3 = v3 - v0;
    v2 = v2 | v4;
    v0 = __helper(v0);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
