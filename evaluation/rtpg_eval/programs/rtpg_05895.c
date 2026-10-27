int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 49;
    int v2 = 43;
    int v3 = 40;
    int v4 = 45;
    int v5 = 55;
    int i;
    v2 = 17;
    v0 = v0 * 6;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
