int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 27;
    int v2 = 100;
    int v3 = 16;
    int v4 = 46;
    int v5 = 16;
    int v6 = 36;
    int v7 = 7;
    int i;
    v6 = v6 * 8;
    if (v0 > v1) { v0 = v1; }
    v1 = 64;
    int *__p = &v1;
    *__p = *__p + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
