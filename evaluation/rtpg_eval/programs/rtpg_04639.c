int __arr_4639[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 43;
    int v2 = 97;
    int v3 = 77;
    int v4 = 64;
    int v5 = 2;
    int i;
    for (i = 0; i < 10; i++) { __arr_4639[i] = v1 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    v3 = v3 & v1;
    return v0;
}
int main(void) { return test_func(); }
