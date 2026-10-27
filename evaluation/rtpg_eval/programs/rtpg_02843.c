int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 28;
    int v2 = 33;
    int v3 = 43;
    int v4 = 40;
    int v5 = 35;
    int i;
    v1 = v1 * 8;
    for (i = 0; i < 13; i++) {
        v5 = v5 + v3;
    }
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
