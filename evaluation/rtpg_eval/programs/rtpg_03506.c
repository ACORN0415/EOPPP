int __arr_3506[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 64;
    int v2 = 55;
    int v3 = 83;
    int v4 = 10;
    int v5 = 24;
    int i;
    for (i = 0; i < 10; i++) { __arr_3506[i] = v2 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
