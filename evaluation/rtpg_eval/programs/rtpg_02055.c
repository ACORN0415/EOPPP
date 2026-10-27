int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 37;
    int v2 = 55;
    int v3 = 83;
    int v4 = 87;
    int v5 = 28;
    int v6 = 45;
    int i;
    v3 = v3 + v3;
    v5 = v5 - v4;
    v3 = v3 & v6;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
