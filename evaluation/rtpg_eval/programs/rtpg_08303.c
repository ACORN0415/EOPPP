int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 28;
    int v2 = 8;
    int v3 = 57;
    int v4 = 18;
    int v5 = 26;
    int v6 = 64;
    int i;
    v5 = v5 - v1;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
