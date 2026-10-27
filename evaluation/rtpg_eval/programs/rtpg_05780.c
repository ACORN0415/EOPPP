int __arr_5780[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 88;
    int v2 = 68;
    int i;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_5780[i] = v2 + i; }
    v2 = v2 * 9;
    v0 = __arr_didx[__idx_didx[0]];
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
