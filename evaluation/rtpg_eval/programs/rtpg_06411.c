int __arr_6411[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 64;
    int v2 = 87;
    int v3 = 14;
    int v4 = 14;
    int v5 = 31;
    int v6 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_6411[i] = v1 + i; }
    if (v0 > v6) { v0 = v6; }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
