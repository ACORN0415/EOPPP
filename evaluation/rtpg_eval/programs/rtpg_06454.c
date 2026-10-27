int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 10;
    int v2 = 95;
    int v3 = 67;
    int v4 = 83;
    int v5 = 15;
    int v6 = 43;
    int v7 = 56;
    int i;
    if (v1 > v2) { v1 = v2; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __arr_didx[__idx_didx[0]];
    switch (v7) {
        case 0: v7 = 1; break;
        case 1: v7 = 2; break;
        default: v7 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
