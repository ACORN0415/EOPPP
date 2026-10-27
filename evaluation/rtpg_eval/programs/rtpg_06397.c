int __arr_6397[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 26;
    int v2 = 35;
    int v3 = 63;
    int v4 = 43;
    int i;
    for (i = 0; i < 10; i++) { __arr_6397[i] = v3 + i; }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v4 = __arr_didx[__idx_didx[0]];
    v0 = v0 ^ v4;
    return v0;
}
int main(void) { return test_func(); }
