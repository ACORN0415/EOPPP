int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 16;
    int v2 = 3;
    int v3 = 47;
    int i;
    v2 = v2 - v1;
    int *__p = &v3;
    *__p = *__p + 1;
    v2 = __arr_didx[__idx_didx[0]];
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
