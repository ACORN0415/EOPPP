int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 93;
    int v2 = 3;
    int v3 = 35;
    int v4 = 7;
    int i;
    v1 = v1 * 9;
    v1 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
