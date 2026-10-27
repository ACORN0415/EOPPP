int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 82;
    int v2 = 94;
    int v3 = 26;
    int v4 = 70;
    int v5 = 70;
    int v6 = 26;
    int v7 = 27;
    int i;
    v6 = v6 + v7;
    v4 = v4 - v6;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    v7 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
