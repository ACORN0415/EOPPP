int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 32;
    int v2 = 10;
    int v3 = 8;
    int v4 = 62;
    int v5 = 77;
    int v6 = 55;
    int v7 = 14;
    int i;
    v5 = v5 - v1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
