int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 21;
    int v2 = 93;
    int v3 = 63;
    int v4 = 37;
    int v5 = 5;
    int v6 = 1;
    int v7 = 58;
    int i;
    v2 = v2 + v2;
    v3 = v3 - v4;
    v3 = 60;
    v2 = v2 / (v7 + 1);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
