int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 7;
    int v2 = 40;
    int v3 = 45;
    int v4 = 47;
    int v5 = 76;
    int v6 = 95;
    int i;
    if (v0 > v4) { v0 = v4; }
    for (i = 0; i < 16; i++) {
        v2 = v2 + v0;
    }
    v4 = 16;
    v4 = __arr_didx[__idx_didx[0]];
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v1 = v1 ^ v2;
    return v0;
}
int main(void) { return test_func(); }
