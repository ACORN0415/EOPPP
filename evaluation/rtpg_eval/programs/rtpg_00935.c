int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 65;
    int v2 = 41;
    int v3 = 80;
    int v4 = 49;
    int v5 = 96;
    int v6 = 32;
    int i;
    v4 = 51;
    v4 = __arr_didx[__idx_didx[0]];
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
