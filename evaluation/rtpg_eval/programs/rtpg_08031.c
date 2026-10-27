int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 95;
    int v2 = 10;
    int v3 = 78;
    int i;
    v3 = v3 + v0;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v0;
    }
    v1 = 65;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    v3 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
