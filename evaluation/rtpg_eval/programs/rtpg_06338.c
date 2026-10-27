int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 19;
    int v2 = 11;
    int v3 = 36;
    int v4 = 16;
    int v5 = 23;
    int v6 = 37;
    int v7 = 86;
    int i;
    v3 = 45;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
