int __arr_1697[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 35;
    int v2 = 31;
    int v3 = 61;
    int v4 = 34;
    int v5 = 72;
    int v6 = 67;
    int v7 = 63;
    int i;
    v3 = v3 - v4;
    for (i = 0; i < 10; i++) { __arr_1697[i] = v2 + i; }
    v5 = v5 + v3;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
