int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 28;
    int v2 = 74;
    int v3 = 51;
    int i;
    v3 = v3 * 10;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v2;
    }
    v2 = v2 + v3;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    v2 = v2 & v3;
    return v0;
}
int main(void) { return test_func(); }
