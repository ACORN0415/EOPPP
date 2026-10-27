int __arr_7848[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 73;
    int v2 = 19;
    int v3 = 26;
    int v4 = 64;
    int v5 = 12;
    int v6 = 9;
    int v7 = 45;
    int i;
    for (i = 0; i < 10; i++) { __arr_7848[i] = v2 + i; }
    v6 = 72;
    v6 = __arr_didx[__idx_didx[0]];
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
