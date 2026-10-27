int __arr_7090[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 37;
    int v2 = 88;
    int v3 = 40;
    int v4 = 63;
    int i;
    v4 = v4 - v3;
    for (i = 0; i < 10; i++) { __arr_7090[i] = v4 + i; }
    v2 = v2 | v3;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
