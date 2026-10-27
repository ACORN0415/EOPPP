int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 58;
    int v2 = 29;
    int v3 = 48;
    int v4 = 99;
    int v5 = 46;
    int v6 = 65;
    int v7 = 81;
    int i;
    for (i = 0; i < 10; i++) {
        v6 = v6 + v4;
    }
    v3 = v3 - v5;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    v7 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
