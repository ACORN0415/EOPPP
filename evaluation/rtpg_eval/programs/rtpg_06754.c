int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 9;
    int v1 = 32;
    int v2 = 18;
    int v3 = 2;
    int v4 = 73;
    int i;
    v1 = __helper(v1);
    int *__p = &v0;
    *__p = *__p + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
