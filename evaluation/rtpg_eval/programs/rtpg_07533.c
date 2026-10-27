int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 12;
    int v2 = 88;
    int i;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v0;
    }
    if (v0 > v0) { v0 = v0; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
