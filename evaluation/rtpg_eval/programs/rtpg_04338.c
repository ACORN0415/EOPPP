int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 3;
    int v2 = 20;
    int v3 = 12;
    int v4 = 90;
    int i;
    v4 = 53;
    for (i = 0; i < 7; i++) {
        v4 = v4 + v4;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
