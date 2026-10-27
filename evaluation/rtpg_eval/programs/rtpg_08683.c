int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 61;
    int v2 = 91;
    int v3 = 59;
    int v4 = 77;
    int i;
    v3 = __arr_didx[__idx_didx[0]];
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
