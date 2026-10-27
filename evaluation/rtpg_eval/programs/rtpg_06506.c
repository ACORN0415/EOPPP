int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6506[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 8;
    int v2 = 98;
    int v3 = 36;
    int v4 = 27;
    int v5 = 73;
    int i;
    v5 = v5 + v2;
    for (i = 0; i < 10; i++) { __arr_6506[i] = v2 + i; }
    int *__p = &v2;
    *__p = *__p + 1;
    v3 = __arr_didx[__idx_didx[0]];
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
