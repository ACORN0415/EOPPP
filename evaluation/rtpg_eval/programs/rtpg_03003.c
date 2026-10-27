int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 24;
    int v2 = 11;
    int v3 = 69;
    int v4 = 22;
    int v5 = 91;
    int i;
    v2 = v2 - v4;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
