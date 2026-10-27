int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 14;
    int v2 = 48;
    int v3 = 83;
    int v4 = 24;
    int v5 = 5;
    int v6 = 33;
    int i;
    v0 = v0 * 4;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
