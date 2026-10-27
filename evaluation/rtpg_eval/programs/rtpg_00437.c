int __arr_437[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 32;
    int v2 = 56;
    int v3 = 14;
    int v4 = 25;
    int v5 = 26;
    int v6 = 100;
    int v7 = 70;
    int i;
    for (i = 0; i < 10; i++) { __arr_437[i] = v1 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = __arr_didx[__idx_didx[0]];
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
