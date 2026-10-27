int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 17;
    int v2 = 58;
    int v3 = 6;
    int i;
    v0 = v0 * 10;
    v1 = v1 - v3;
    v0 = __helper(v0);
    int *__p = &v1;
    *__p = *__p + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
