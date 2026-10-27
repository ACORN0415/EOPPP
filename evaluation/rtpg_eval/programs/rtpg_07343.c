int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 9;
    int v2 = 16;
    int v3 = 13;
    int v4 = 45;
    int v5 = 86;
    int v6 = 0;
    int v7 = 16;
    int i;
    v2 = 61;
    v5 = __arr_didx[__idx_didx[0]];
    switch (v7) {
        case 0: v7 = 1; break;
        case 1: v7 = 2; break;
        default: v7 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
