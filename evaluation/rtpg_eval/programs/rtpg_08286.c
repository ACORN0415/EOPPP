int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 36;
    int v2 = 83;
    int v3 = 93;
    int v4 = 63;
    int v5 = 96;
    int v6 = 19;
    int i;
    v0 = v0 * 10;
    v1 = v1 + v1;
    v0 = 52;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
