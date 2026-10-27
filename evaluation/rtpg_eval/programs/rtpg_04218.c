int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 16;
    int v2 = 37;
    int v3 = 75;
    int i;
    v0 = v0 + v2;
    v1 = v1 - v3;
    for (i = 0; i < 13; i++) {
        v3 = v3 + v0;
    }
    v0 = v0 / (v3 + 1);
    v3 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
