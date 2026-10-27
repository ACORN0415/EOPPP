int __arr_3667[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 74;
    int v2 = 17;
    int v3 = 87;
    int i;
    for (i = 0; i < 10; i++) { __arr_3667[i] = v2 + i; }
    v3 = v3 % (v2 + 1);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
