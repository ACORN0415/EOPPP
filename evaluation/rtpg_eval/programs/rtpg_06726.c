int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 41;
    int v2 = 63;
    int v3 = 67;
    int v4 = 96;
    int v5 = 80;
    int v6 = 35;
    int v7 = 33;
    int i;
    if (v3 > v7) { v3 = v7; }
    v0 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
