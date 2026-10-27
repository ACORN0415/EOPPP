int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 2;
    int v1 = 45;
    int v2 = 70;
    int v3 = 81;
    int v4 = 54;
    int v5 = 69;
    int v6 = 85;
    int i;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v4;
    }
    v3 = __helper(v3);
    int *__p = &v0;
    *__p = *__p + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
