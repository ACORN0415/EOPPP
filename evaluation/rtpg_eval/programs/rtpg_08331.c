int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 31;
    int v1 = 4;
    int v2 = 33;
    int i;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v0;
    }
    v1 = v1 - v2;
    v1 = 9;
    int *__p = &v0;
    *__p = *__p + 1;
    v1 = v1 | v0;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
