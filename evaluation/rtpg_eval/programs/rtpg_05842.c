int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 88;
    int v2 = 0;
    int v3 = 0;
    int v4 = 34;
    int v5 = 86;
    int v6 = 52;
    int v7 = 96;
    int i;
    v0 = v0 - v5;
    for (i = 0; i < 13; i++) {
        v4 = v4 + v6;
    }
    v3 = v3 * 5;
    int *__p = &v5;
    *__p = *__p + 1;
    v2 = __helper(v2);
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
