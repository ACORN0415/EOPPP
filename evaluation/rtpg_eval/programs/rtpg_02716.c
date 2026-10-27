int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 42;
    int v2 = 54;
    int v3 = 30;
    int v4 = 69;
    int v5 = 66;
    int i;
    if (v2 > v3) { v2 = v3; }
    v3 = __arr_didx[__idx_didx[0]];
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
