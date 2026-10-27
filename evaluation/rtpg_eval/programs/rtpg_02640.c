int __arr_2640[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 39;
    int v2 = 36;
    int v3 = 35;
    int v4 = 58;
    int i;
    for (i = 0; i < 9; i++) {
        v4 = v4 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_2640[i] = v0 + i; }
    v4 = __arr_didx[__idx_didx[0]];
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
