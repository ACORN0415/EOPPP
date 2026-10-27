int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 88;
    int v2 = 52;
    int i;
    v1 = 61;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v1;
    }
    v1 = v1 * 8;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
