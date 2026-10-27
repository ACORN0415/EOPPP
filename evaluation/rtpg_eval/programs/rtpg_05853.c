int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 67;
    int v2 = 40;
    int v3 = 43;
    int v4 = 23;
    int v5 = 9;
    int v6 = 48;
    int v7 = 99;
    int i;
    if (v0 > v7) { v0 = v7; }
    v1 = v1 ^ v3;
    switch (v7) {
        case 0: v7 = 1; break;
        case 1: v7 = 2; break;
        default: v7 = 0; break;
    }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
