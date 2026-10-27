int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 61;
    int v2 = 54;
    int v3 = 72;
    int v4 = 37;
    int i;
    v0 = v0 + v2;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
