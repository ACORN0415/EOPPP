int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 2;
    int v2 = 79;
    int v3 = 32;
    int v4 = 15;
    int v5 = 39;
    int v6 = 66;
    int v7 = 79;
    int i;
    v0 = v0 + v2;
    v0 = 34;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
