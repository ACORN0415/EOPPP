int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 52;
    int v2 = 41;
    int v3 = 76;
    int i;
    v3 = 82;
    v0 = v0 + v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v3 = __arr_didx[__idx_didx[0]];
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
