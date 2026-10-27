int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 26;
    int v2 = 9;
    int v3 = 58;
    int v4 = 12;
    int v5 = 46;
    int v6 = 14;
    int v7 = 1;
    int i;
    v1 = v1 - v3;
    v2 = v2 * 3;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
