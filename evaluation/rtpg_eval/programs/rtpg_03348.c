int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 84;
    int v2 = 19;
    int v3 = 48;
    int v4 = 12;
    int v5 = 60;
    int v6 = 45;
    int i;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
