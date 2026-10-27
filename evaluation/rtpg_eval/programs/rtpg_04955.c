int __arr_4955[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 61;
    int v2 = 55;
    int v3 = 53;
    int v4 = 77;
    int v5 = 31;
    int i;
    for (i = 0; i < 10; i++) { __arr_4955[i] = v0 + i; }
    v2 = __arr_didx[__idx_didx[0]];
    int *__p = &v5;
    *__p = *__p + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
