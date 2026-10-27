int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 57;
    int v2 = 95;
    int v3 = 95;
    int v4 = 66;
    int v5 = 87;
    int i;
    for (i = 0; i < 17; i++) {
        v3 = v3 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
