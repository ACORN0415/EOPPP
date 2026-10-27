int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 34;
    int v1 = 27;
    int v2 = 80;
    int v3 = 74;
    int v4 = 53;
    int i;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v0;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
