int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 58;
    int v1 = 4;
    int v2 = 88;
    int v3 = 71;
    int v4 = 28;
    int v5 = 83;
    int v6 = 98;
    int i;
    v5 = 78;
    v6 = v6 - v0;
    v0 = v0 & v5;
    v1 = __helper(v1);
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
