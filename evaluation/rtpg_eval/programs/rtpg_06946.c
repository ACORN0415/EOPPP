int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 90;
    int v1 = 4;
    int v2 = 40;
    int v3 = 67;
    int v4 = 41;
    int v5 = 39;
    int v6 = 11;
    int i;
    v0 = v0 - v5;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v6;
    }
    v2 = 47;
    v4 = __helper(v4);
    int *__p = &v5;
    *__p = *__p + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
