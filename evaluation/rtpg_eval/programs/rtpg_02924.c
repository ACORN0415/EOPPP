int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2924[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 8;
    int v2 = 26;
    int v3 = 44;
    int v4 = 22;
    int v5 = 98;
    int v6 = 76;
    int v7 = 82;
    int i;
    for (i = 0; i < 10; i++) { __arr_2924[i] = v7 + i; }
    if (v7 > v7) { v7 = v7; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v4 = __helper(v4);
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
