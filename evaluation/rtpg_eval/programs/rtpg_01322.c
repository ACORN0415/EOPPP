int __arr_1322[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 31;
    int v2 = 68;
    int v3 = 97;
    int v4 = 70;
    int v5 = 17;
    int v6 = 44;
    int i;
    v3 = 73;
    v3 = v3 * 2;
    for (i = 0; i < 10; i++) { __arr_1322[i] = v6 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
