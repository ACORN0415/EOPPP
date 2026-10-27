int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 87;
    int v2 = 45;
    int v3 = 97;
    int v4 = 37;
    int v5 = 96;
    int i;
    v3 = v3 - v1;
    v5 = v5 * 6;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
