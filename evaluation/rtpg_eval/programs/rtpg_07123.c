int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 5;
    int v2 = 10;
    int v3 = 83;
    int i;
    v0 = 79;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v2;
    }
    if (v3 > v2) { v3 = v2; }
    v2 = __arr_didx[__idx_didx[0]];
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
