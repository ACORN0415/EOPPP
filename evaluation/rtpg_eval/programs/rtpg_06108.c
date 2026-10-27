int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 54;
    int v2 = 58;
    int v3 = 6;
    int v4 = 57;
    int v5 = 95;
    int i;
    if (v4 > v2) { v4 = v2; }
    v3 = 66;
    v1 = __arr_didx[__idx_didx[0]];
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
