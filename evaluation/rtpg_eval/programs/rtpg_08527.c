int __arr_8527[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 14;
    int v2 = 11;
    int i;
    v0 = v0 + v2;
    for (i = 0; i < 10; i++) { __arr_8527[i] = v2 + i; }
    v2 = v2 - v0;
    int *__p = &v1;
    *__p = *__p + 1;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
