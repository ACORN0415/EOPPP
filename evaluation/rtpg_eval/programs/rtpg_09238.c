int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 48;
    int v2 = 1;
    int i;
    v0 = v0 * 3;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
