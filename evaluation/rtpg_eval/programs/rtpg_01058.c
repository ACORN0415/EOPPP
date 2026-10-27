int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 28;
    int v2 = 9;
    int v3 = 2;
    int v4 = 43;
    int v5 = 32;
    int v6 = 37;
    int v7 = 99;
    int i;
    v0 = v0 - v2;
    v2 = 27;
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
