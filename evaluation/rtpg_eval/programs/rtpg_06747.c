int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 30;
    int v2 = 7;
    int v3 = 59;
    int v4 = 63;
    int v5 = 45;
    int v6 = 28;
    int v7 = 40;
    int i;
    v7 = v7 - v6;
    v0 = v0 * 6;
    v4 = __arr_didx[__idx_didx[0]];
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
