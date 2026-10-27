int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 73;
    int v2 = 46;
    int i;
    v1 = v1 * 3;
    v2 = v2 - v1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
