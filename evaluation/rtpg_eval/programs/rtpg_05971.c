int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 94;
    int v1 = 59;
    int v2 = 91;
    int v3 = 66;
    int v4 = 26;
    int v5 = 12;
    int v6 = 39;
    int v7 = 68;
    int i;
    for (i = 0; i < 7; i++) {
        v4 = v4 + v7;
    }
    v4 = v4 * 7;
    v1 = __helper(v1);
    int *__p = &v7;
    *__p = *__p + 1;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
