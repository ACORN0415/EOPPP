int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 95;
    int v2 = 99;
    int v3 = 19;
    int v4 = 36;
    int v5 = 96;
    int v6 = 68;
    int v7 = 36;
    int i;
    v2 = v2 + v1;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
