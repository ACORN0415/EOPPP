int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 27;
    int v2 = 49;
    int i;
    v1 = 58;
    v1 = v1 * 3;
    v1 = __arr_didx[__idx_didx[0]];
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v2 = v2 | v1;
    return v0;
}
int main(void) { return test_func(); }
