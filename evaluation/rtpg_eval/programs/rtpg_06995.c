int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 96;
    int v1 = 75;
    int v2 = 26;
    int v3 = 21;
    int v4 = 97;
    int v5 = 16;
    int i;
    v2 = v2 + v2;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__p = &v5;
    *__p = *__p + 1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
