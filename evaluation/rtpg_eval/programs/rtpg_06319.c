int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 100;
    int v2 = 63;
    int v3 = 62;
    int v4 = 21;
    int v5 = 62;
    int i;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
