int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 47;
    int v2 = 100;
    int v3 = 31;
    int v4 = 3;
    int v5 = 61;
    int v6 = 66;
    int i;
    v6 = 63;
    for (i = 0; i < 5; i++) {
        v6 = v6 + v4;
    }
    v3 = v3 - v1;
    v1 = __arr_didx[__idx_didx[0]];
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
