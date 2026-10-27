int __arr_3425[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 98;
    int v2 = 56;
    int v3 = 87;
    int v4 = 67;
    int v5 = 37;
    int i;
    for (i = 0; i < 10; i++) { __arr_3425[i] = v2 + i; }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
