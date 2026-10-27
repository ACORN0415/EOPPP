int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 12;
    int v2 = 22;
    int v3 = 19;
    int v4 = 49;
    int i;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v1;
    }
    v1 = __arr_didx[__idx_didx[0]];
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v3 = v3 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
