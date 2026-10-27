int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 89;
    int v1 = 25;
    int v2 = 9;
    int v3 = 30;
    int v4 = 24;
    int v5 = 22;
    int v6 = 62;
    int i;
    if (v5 > v2) { v5 = v2; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
