int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6513[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 52;
    int v2 = 80;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v1;
    }
    v1 = v1 + v2;
    for (i = 0; i < 10; i++) { __arr_6513[i] = v1 + i; }
    v1 = __helper(v1);
    int *__p = &v1;
    *__p = *__p + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
