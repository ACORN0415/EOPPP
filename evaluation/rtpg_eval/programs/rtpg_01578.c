int __arr_1578[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 78;
    int v2 = 74;
    int v3 = 8;
    int v4 = 1;
    int v5 = 61;
    int v6 = 83;
    int v7 = 56;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v6;
    }
    if (v4 > v5) { v4 = v5; }
    for (i = 0; i < 10; i++) { __arr_1578[i] = v2 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    v6 = v6 & v2;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
