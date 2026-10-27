int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 73;
    int v2 = 33;
    int v3 = 75;
    int i;
    v2 = v2 - v1;
    if (v1 > v0) { v1 = v0; }
    v2 = v2 * 7;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
