int __arr_5179[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 15;
    int v2 = 72;
    int v3 = 97;
    int v4 = 53;
    int v5 = 79;
    int i;
    for (i = 0; i < 10; i++) { __arr_5179[i] = v5 + i; }
    v5 = 7;
    v4 = v4 - v1;
    v1 = __arr_didx[__idx_didx[0]];
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
