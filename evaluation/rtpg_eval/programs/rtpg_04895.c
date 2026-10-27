int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 6;
    int v2 = 81;
    int v3 = 29;
    int v4 = 13;
    int v5 = 22;
    int v6 = 49;
    int i;
    if (v1 > v4) { v1 = v4; }
    v1 = v1 * 4;
    v4 = __arr_didx[__idx_didx[0]];
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
