int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 92;
    int v2 = 92;
    int v3 = 83;
    int i;
    v1 = v1 * 4;
    if (v2 > v3) { v2 = v3; }
    v2 = v2 - v3;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    v0 = v0 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
