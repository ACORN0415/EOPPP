int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 37;
    int v2 = 8;
    int v3 = 85;
    int i;
    v3 = v3 * 6;
    v2 = v2 + v3;
    v2 = __arr_didx[__idx_didx[0]];
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
