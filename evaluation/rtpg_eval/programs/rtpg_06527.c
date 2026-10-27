int __arr_6527[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 81;
    int v2 = 36;
    int v3 = 20;
    int v4 = 41;
    int v5 = 10;
    int v6 = 52;
    int i;
    for (i = 0; i < 10; i++) { __arr_6527[i] = v6 + i; }
    v1 = v1 - v0;
    v5 = 83;
    v1 = __arr_didx[__idx_didx[0]];
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
