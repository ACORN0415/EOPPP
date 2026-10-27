int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 86;
    int v2 = 78;
    int v3 = 63;
    int v4 = 8;
    int v5 = 70;
    int v6 = 93;
    int i;
    v4 = v4 + v5;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
