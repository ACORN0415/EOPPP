int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 50;
    int v2 = 25;
    int v3 = 78;
    int v4 = 93;
    int v5 = 6;
    int v6 = 7;
    int v7 = 79;
    int i;
    v5 = 15;
    v2 = v2 + v2;
    for (i = 0; i < 9; i++) {
        v5 = v5 + v1;
    }
    v4 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
