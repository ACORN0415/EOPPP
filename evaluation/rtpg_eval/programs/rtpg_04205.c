int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 60;
    int v1 = 31;
    int v2 = 54;
    int v3 = 38;
    int v4 = 89;
    int v5 = 49;
    int v6 = 25;
    int i;
    v2 = v2 - v5;
    int *__p = &v2;
    *__p = *__p + 1;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
