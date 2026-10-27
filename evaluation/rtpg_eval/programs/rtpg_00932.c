int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 76;
    int v1 = 56;
    int v2 = 39;
    int v3 = 43;
    int v4 = 28;
    int v5 = 55;
    int v6 = 60;
    int v7 = 5;
    int i;
    if (v2 > v3) { v2 = v3; }
    v5 = __helper(v5);
    int *__p = &v7;
    *__p = *__p + 1;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
