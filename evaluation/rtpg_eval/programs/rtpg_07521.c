int __arr_7521[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 10;
    int v2 = 11;
    int v3 = 44;
    int i;
    for (i = 0; i < 10; i++) { __arr_7521[i] = v0 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
