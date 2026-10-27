int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 5;
    int v2 = 56;
    int v3 = 78;
    int v4 = 34;
    int v5 = 50;
    int v6 = 43;
    int v7 = 100;
    int i;
    v7 = 51;
    if (v6 > v2) { v6 = v2; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
