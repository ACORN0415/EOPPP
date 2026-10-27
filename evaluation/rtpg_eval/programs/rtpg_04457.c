int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 10;
    int v2 = 51;
    int v3 = 15;
    int i;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v3;
    }
    if (v3 > v1) { v3 = v1; }
    v1 = __arr_didx[__idx_didx[0]];
    int *__p = &v1;
    *__p = *__p + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
