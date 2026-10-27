int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 4;
    int v2 = 68;
    int v3 = 62;
    int v4 = 61;
    int v5 = 7;
    int i;
    v1 = v1 - v3;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v1;
    }
    v1 = v1 * 3;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
