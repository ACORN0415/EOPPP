int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3736[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 9;
    int v2 = 36;
    int v3 = 91;
    int v4 = 81;
    int v5 = 71;
    int v6 = 47;
    int v7 = 99;
    int i;
    for (i = 0; i < 10; i++) { __arr_3736[i] = v7 + i; }
    v1 = __helper(v1);
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    int *__p = &v7;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
