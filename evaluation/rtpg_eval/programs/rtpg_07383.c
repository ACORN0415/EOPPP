int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 22;
    int v2 = 92;
    int v3 = 86;
    int v4 = 35;
    int v5 = 95;
    int i;
    v4 = v4 + v3;
    v2 = v2 - v1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v1 = __arr_didx[__idx_didx[0]];
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
