int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 16;
    int v1 = 99;
    int v2 = 17;
    int i;
    v1 = 15;
    v2 = v2 + v2;
    int *__p = &v0;
    *__p = *__p + 1;
    v2 = __helper(v2);
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
