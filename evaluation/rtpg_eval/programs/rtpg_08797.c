int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 28;
    int v2 = 18;
    int v3 = 53;
    int v4 = 12;
    int v5 = 55;
    int i;
    v0 = 4;
    v5 = __arr_didx[__idx_didx[0]];
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
