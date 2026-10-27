int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 56;
    int v2 = 58;
    int v3 = 5;
    int v4 = 90;
    int v5 = 92;
    int v6 = 26;
    int i;
    v2 = v2 - v4;
    v0 = __arr_didx[__idx_didx[0]];
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
