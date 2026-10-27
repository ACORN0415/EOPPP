int __arr_232[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 42;
    int v2 = 7;
    int v3 = 19;
    int v4 = 36;
    int v5 = 39;
    int v6 = 75;
    int i;
    for (i = 0; i < 10; i++) { __arr_232[i] = v0 + i; }
    v0 = v0 * 2;
    for (i = 0; i < 17; i++) {
        v5 = v5 + v1;
    }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
