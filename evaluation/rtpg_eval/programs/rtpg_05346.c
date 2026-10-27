int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 39;
    int v2 = 18;
    int v3 = 55;
    int v4 = 85;
    int v5 = 69;
    int v6 = 89;
    int v7 = 58;
    int i;
    for (i = 0; i < 9; i++) {
        v7 = v7 + v1;
    }
    int *__p = &v6;
    *__p = *__p + 1;
    v1 = __arr_didx[__idx_didx[0]];
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
