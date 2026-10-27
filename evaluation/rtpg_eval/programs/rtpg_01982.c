int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 49;
    int v2 = 55;
    int v3 = 84;
    int v4 = 52;
    int v5 = 28;
    int i;
    v0 = v0 * 10;
    v4 = __arr_didx[__idx_didx[0]];
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
