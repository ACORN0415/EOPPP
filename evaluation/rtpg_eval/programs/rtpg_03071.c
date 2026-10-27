int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 33;
    int v2 = 16;
    int i;
    if (v2 > v1) { v2 = v1; }
    for (i = 0; i < 15; i++) {
        v2 = v2 + v2;
    }
    v0 = v0 - v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = __arr_didx[__idx_didx[0]];
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
