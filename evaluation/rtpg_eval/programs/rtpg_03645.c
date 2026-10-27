int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 73;
    int v2 = 4;
    int v3 = 87;
    int v4 = 1;
    int v5 = 25;
    int v6 = 100;
    int v7 = 92;
    int i;
    v4 = v4 * 3;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v1;
    }
    v4 = v4 - v2;
    v1 = __arr_didx[__idx_didx[0]];
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
