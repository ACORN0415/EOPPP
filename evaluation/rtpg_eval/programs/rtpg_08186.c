int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 66;
    int v2 = 4;
    int v3 = 34;
    int v4 = 93;
    int v5 = 80;
    int i;
    v4 = v4 - v0;
    if (v4 > v4) { v4 = v4; }
    for (i = 0; i < 12; i++) {
        v4 = v4 + v0;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    v1 = __helper(v1);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
