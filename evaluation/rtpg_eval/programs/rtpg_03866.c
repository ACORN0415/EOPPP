int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 89;
    int v2 = 38;
    int v3 = 76;
    int i;
    v2 = v2 - v1;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v2;
    }
    v0 = __arr_didx[__idx_didx[0]];
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
