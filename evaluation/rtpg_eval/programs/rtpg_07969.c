int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 53;
    int v2 = 1;
    int v3 = 9;
    int v4 = 17;
    int v5 = 97;
    int i;
    v4 = v4 + v4;
    v1 = v1 * 8;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
