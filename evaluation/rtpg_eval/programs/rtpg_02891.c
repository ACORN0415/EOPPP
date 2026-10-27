int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 64;
    int v2 = 92;
    int v3 = 54;
    int v4 = 57;
    int i;
    v3 = v3 - v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
