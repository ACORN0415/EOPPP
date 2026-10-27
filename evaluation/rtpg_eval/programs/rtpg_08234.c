int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 27;
    int v2 = 3;
    int v3 = 4;
    int i;
    v3 = v3 - v1;
    v0 = __arr_didx[__idx_didx[0]];
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
