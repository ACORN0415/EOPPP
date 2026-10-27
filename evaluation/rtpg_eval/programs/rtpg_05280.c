int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5280[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 60;
    int v2 = 22;
    int v3 = 45;
    int v4 = 86;
    int v5 = 30;
    int v6 = 57;
    int i;
    for (i = 0; i < 10; i++) { __arr_5280[i] = v5 + i; }
    v3 = v3 + v1;
    int *__p = &v2;
    *__p = *__p + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
