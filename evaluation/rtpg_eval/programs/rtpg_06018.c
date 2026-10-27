int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 96;
    int v2 = 93;
    int v3 = 45;
    int v4 = 61;
    int v5 = 81;
    int i;
    v3 = 49;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v5 = v5 ^ v2;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
