int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 69;
    int v2 = 81;
    int v3 = 27;
    int v4 = 14;
    int v5 = 83;
    int v6 = 76;
    int i;
    v2 = v2 - v4;
    v0 = v0 + v6;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
