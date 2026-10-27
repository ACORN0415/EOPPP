int __arr_3004[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 6;
    int v2 = 13;
    int v3 = 96;
    int i;
    for (i = 0; i < 10; i++) { __arr_3004[i] = v3 + i; }
    v0 = __arr_didx[__idx_didx[0]];
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
