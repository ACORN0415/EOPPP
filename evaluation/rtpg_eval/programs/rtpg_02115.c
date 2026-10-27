int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 84;
    int v2 = 59;
    int v3 = 18;
    int i;
    v1 = 72;
    v2 = v2 + v0;
    v1 = __arr_didx[__idx_didx[0]];
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
