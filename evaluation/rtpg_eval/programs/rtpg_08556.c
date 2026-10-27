int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 95;
    int v2 = 15;
    int v3 = 92;
    int v4 = 12;
    int v5 = 38;
    int v6 = 3;
    int v7 = 49;
    int i;
    v4 = v4 - v6;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    v5 = __arr_didx[__idx_didx[0]];
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
