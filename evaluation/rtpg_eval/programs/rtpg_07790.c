int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 5;
    int v2 = 69;
    int v3 = 71;
    int v4 = 87;
    int v5 = 36;
    int i;
    v2 = 74;
    for (i = 0; i < 6; i++) {
        v5 = v5 + v5;
    }
    v4 = v4 + v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v3 = v3 / (v0 + 1);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
