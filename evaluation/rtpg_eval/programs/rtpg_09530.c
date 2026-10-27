int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 37;
    int v2 = 39;
    int v3 = 83;
    int v4 = 20;
    int v5 = 36;
    int v6 = 55;
    int v7 = 28;
    int i;
    for (i = 0; i < 6; i++) {
        v3 = v3 + v7;
    }
    v6 = 32;
    v4 = v4 * 2;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
