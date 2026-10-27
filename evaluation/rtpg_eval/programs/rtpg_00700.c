int __arr_700[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 66;
    int v2 = 21;
    int v3 = 79;
    int v4 = 83;
    int v5 = 66;
    int v6 = 94;
    int i;
    for (i = 0; i < 10; i++) { __arr_700[i] = v6 + i; }
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    v5 = __arr_didx[__idx_didx[0]];
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
