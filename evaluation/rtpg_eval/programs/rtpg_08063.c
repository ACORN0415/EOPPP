int __arr_8063[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 69;
    int v2 = 88;
    int v3 = 25;
    int v4 = 63;
    int v5 = 15;
    int v6 = 90;
    int v7 = 7;
    int i;
    for (i = 0; i < 10; i++) { __arr_8063[i] = v2 + i; }
    v7 = v7 + v7;
    int *__p = &v0;
    *__p = *__p + 1;
    v7 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
