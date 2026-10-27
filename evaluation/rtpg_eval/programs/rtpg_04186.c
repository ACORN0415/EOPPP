int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 35;
    int v2 = 25;
    int v3 = 45;
    int v4 = 6;
    int v5 = 35;
    int v6 = 84;
    int i;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v2;
    }
    v2 = __arr_didx[__idx_didx[0]];
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
