int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 10;
    int v2 = 39;
    int v3 = 28;
    int i;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v3;
    }
    v0 = v0 + v3;
    v1 = __arr_didx[__idx_didx[0]];
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
