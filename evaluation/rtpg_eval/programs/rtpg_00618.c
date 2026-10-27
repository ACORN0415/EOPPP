int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 7;
    int v1 = 46;
    int v2 = 75;
    int i;
    if (v1 > v1) { v1 = v1; }
    int *__p = &v0;
    *__p = *__p + 1;
    v1 = __helper(v1);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
