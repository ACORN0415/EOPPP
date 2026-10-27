int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 1;
    int v2 = 82;
    int v3 = 41;
    int v4 = 52;
    int v5 = 41;
    int i;
    v0 = v0 + v4;
    v5 = __arr_didx[__idx_didx[0]];
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
