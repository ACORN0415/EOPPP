int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 92;
    int v2 = 67;
    int v3 = 75;
    int v4 = 83;
    int v5 = 47;
    int v6 = 75;
    int v7 = 51;
    int i;
    if (v6 > v0) { v6 = v0; }
    for (i = 0; i < 8; i++) {
        v0 = v0 + v1;
    }
    v6 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
