int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 99;
    int v2 = 29;
    int v3 = 12;
    int v4 = 46;
    int v5 = 29;
    int i;
    v0 = v0 - v5;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v3;
    }
    v5 = v5 + v0;
    v1 = __arr_didx[__idx_didx[0]];
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
