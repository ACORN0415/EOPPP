int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 43;
    int v2 = 34;
    int v3 = 36;
    int v4 = 26;
    int v5 = 36;
    int i;
    for (i = 0; i < 18; i++) {
        v5 = v5 + v1;
    }
    v0 = v0 * 3;
    v4 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
