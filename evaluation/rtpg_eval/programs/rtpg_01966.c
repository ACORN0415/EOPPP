int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 47;
    int v2 = 81;
    int v3 = 75;
    int v4 = 61;
    int v5 = 23;
    int i;
    v2 = v2 + v1;
    v4 = __arr_didx[__idx_didx[0]];
    int *__p = &v3;
    *__p = *__p + 1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
