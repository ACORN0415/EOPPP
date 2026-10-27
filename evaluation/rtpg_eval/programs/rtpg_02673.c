int __arr_2673[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 97;
    int v2 = 37;
    int v3 = 28;
    int v4 = 69;
    int i;
    for (i = 0; i < 10; i++) { __arr_2673[i] = v4 + i; }
    v0 = __arr_didx[__idx_didx[0]];
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
