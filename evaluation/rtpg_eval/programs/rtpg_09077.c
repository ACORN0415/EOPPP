int __arr_9077[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 73;
    int v2 = 2;
    int v3 = 38;
    int i;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 10; i++) { __arr_9077[i] = v3 + i; }
    v2 = __arr_didx[__idx_didx[0]];
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
