int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 84;
    int v2 = 20;
    int v3 = 53;
    int v4 = 73;
    int i;
    v0 = v0 - v4;
    v2 = v2 + v0;
    v1 = __arr_didx[__idx_didx[0]];
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
