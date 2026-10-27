int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2853[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 17;
    int v2 = 74;
    int v3 = 8;
    int v4 = 69;
    int v5 = 22;
    int i;
    for (i = 0; i < 10; i++) { __arr_2853[i] = v0 + i; }
    v2 = __helper(v2);
    int *__p = &v4;
    *__p = *__p + 1;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
