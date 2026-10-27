int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 74;
    int v2 = 14;
    int v3 = 73;
    int v4 = 68;
    int v5 = 5;
    int v6 = 71;
    int i;
    if (v0 > v2) { v0 = v2; }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    v5 = __arr_didx[__idx_didx[0]];
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
