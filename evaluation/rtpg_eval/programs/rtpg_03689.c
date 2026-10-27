int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 32;
    int v2 = 11;
    int v3 = 36;
    int v4 = 81;
    int i;
    if (v3 > v1) { v3 = v1; }
    v1 = 50;
    int *__p = &v1;
    *__p = *__p + 1;
    v2 = __arr_didx[__idx_didx[0]];
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
