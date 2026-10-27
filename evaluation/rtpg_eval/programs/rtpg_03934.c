int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 25;
    int v2 = 86;
    int v3 = 55;
    int v4 = 13;
    int i;
    v2 = v2 - v0;
    int *__p = &v1;
    *__p = *__p + 1;
    v3 = __arr_didx[__idx_didx[0]];
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
