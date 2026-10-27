int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 13;
    int v1 = 7;
    int v2 = 82;
    int v3 = 68;
    int v4 = 55;
    int i;
    v2 = 76;
    v3 = v3 * 9;
    if (v0 > v4) { v0 = v4; }
    int *__p = &v1;
    *__p = *__p + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
