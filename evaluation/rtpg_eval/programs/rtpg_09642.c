int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 84;
    int v1 = 36;
    int v2 = 78;
    int v3 = 91;
    int i;
    v1 = v1 - v0;
    int *__p = &v2;
    *__p = *__p + 1;
    v1 = __helper(v1);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
