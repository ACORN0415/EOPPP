int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 11;
    int v2 = 32;
    int v3 = 56;
    int v4 = 30;
    int v5 = 9;
    int v6 = 57;
    int v7 = 23;
    int i;
    v3 = v3 - v5;
    v5 = __arr_didx[__idx_didx[0]];
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
