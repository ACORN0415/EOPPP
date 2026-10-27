int __arr_4637[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 67;
    int v2 = 83;
    int v3 = 28;
    int v4 = 41;
    int v5 = 97;
    int i;
    for (i = 0; i < 10; i++) { __arr_4637[i] = v2 + i; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
