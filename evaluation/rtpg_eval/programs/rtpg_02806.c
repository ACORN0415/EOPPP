int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 18;
    int v2 = 99;
    int v3 = 63;
    int v4 = 68;
    int v5 = 42;
    int v6 = 43;
    int v7 = 55;
    int i;
    v0 = v0 + v2;
    v2 = 69;
    v7 = __arr_didx[__idx_didx[0]];
    v2 = v2 | v6;
    return v0;
}
int main(void) { return test_func(); }
