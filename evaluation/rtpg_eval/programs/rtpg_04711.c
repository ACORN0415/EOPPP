int __arr_4711[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 48;
    int v2 = 63;
    int v3 = 24;
    int v4 = 99;
    int i;
    for (i = 0; i < 19; i++) {
        v4 = v4 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_4711[i] = v0 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v3 = __arr_didx[__idx_didx[0]];
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
