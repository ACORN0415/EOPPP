int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 22;
    int v2 = 44;
    int v3 = 33;
    int v4 = 34;
    int v5 = 98;
    int i;
    v4 = v4 * 2;
    v0 = v0 & v3;
    v3 = __arr_didx[__idx_didx[0]];
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
