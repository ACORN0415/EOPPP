int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 42;
    int v2 = 4;
    int v3 = 20;
    int v4 = 96;
    int v5 = 75;
    int v6 = 18;
    int v7 = 39;
    int i;
    for (i = 0; i < 20; i++) {
        v7 = v7 + v1;
    }
    v7 = v7 * 8;
    v1 = __arr_didx[__idx_didx[0]];
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
