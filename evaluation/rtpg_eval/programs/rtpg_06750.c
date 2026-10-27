int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 70;
    int v1 = 17;
    int v2 = 51;
    int v3 = 94;
    int i;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v1;
    }
    v0 = v0 * 9;
    int *__p = &v2;
    *__p = *__p + 1;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
