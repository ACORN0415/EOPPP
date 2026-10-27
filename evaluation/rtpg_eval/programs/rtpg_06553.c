int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 62;
    int v1 = 100;
    int v2 = 8;
    int i;
    v1 = v1 * 2;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v2;
    }
    v2 = v2 - v0;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v2 = __helper(v2);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
