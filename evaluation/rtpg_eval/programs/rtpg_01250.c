int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1250[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 56;
    int v2 = 83;
    int v3 = 27;
    int v4 = 71;
    int v5 = 8;
    int v6 = 63;
    int v7 = 32;
    int i;
    for (i = 0; i < 10; i++) { __arr_1250[i] = v6 + i; }
    if (v3 > v3) { v3 = v3; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v6 = __helper(v6);
    int *__p = &v6;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
