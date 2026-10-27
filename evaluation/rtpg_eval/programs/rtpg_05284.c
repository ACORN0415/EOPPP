int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 10;
    int v2 = 50;
    int i;
    v2 = v2 * 8;
    v1 = 8;
    v2 = __arr_didx[__idx_didx[0]];
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
