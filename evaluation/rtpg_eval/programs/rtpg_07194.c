int __arr_7194[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 47;
    int v1 = 92;
    int v2 = 75;
    int v3 = 92;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_7194[i] = v1 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
