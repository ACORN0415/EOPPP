int __arr_4093[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 31;
    int v1 = 66;
    int v2 = 20;
    int v3 = 34;
    int v4 = 2;
    int v5 = 99;
    int v6 = 10;
    int i;
    for (i = 0; i < 10; i++) { __arr_4093[i] = v2 + i; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
