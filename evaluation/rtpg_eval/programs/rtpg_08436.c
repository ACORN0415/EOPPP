int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 75;
    int v2 = 44;
    int v3 = 43;
    int v4 = 82;
    int v5 = 69;
    int v6 = 20;
    int i;
    if (v4 > v3) { v4 = v3; }
    v4 = v4 * 4;
    for (i = 0; i < 6; i++) {
        v3 = v3 + v5;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
