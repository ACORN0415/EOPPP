int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 86;
    int v2 = 57;
    int v3 = 94;
    int v4 = 16;
    int i;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v4;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    v1 = __arr_didx[__idx_didx[0]];
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
