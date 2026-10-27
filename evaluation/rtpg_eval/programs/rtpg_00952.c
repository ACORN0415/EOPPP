int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 62;
    int v2 = 45;
    int v3 = 35;
    int v4 = 52;
    int v5 = 96;
    int i;
    v3 = 22;
    v4 = v4 * 7;
    v5 = v5 + v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
