int __arr_5556[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 98;
    int v2 = 65;
    int v3 = 27;
    int v4 = 91;
    int v5 = 27;
    int v6 = 54;
    int v7 = 0;
    int i;
    for (i = 0; i < 8; i++) {
        v7 = v7 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_5556[i] = v5 + i; }
    v6 = 78;
    int *__p = &v5;
    *__p = *__p + 1;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
