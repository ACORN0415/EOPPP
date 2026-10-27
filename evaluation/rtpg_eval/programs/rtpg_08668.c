int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 99;
    int v2 = 96;
    int v3 = 45;
    int v4 = 72;
    int i;
    v0 = v0 * 3;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v2;
    }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
