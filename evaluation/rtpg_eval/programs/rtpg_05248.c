int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 19;
    int v2 = 90;
    int i;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v0;
    }
    v0 = 39;
    if (v2 > v2) { v2 = v2; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
