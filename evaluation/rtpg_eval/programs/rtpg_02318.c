int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 81;
    int v2 = 18;
    int v3 = 54;
    int v4 = 72;
    int v5 = 35;
    int i;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v2;
    }
    v4 = __arr_didx[__idx_didx[0]];
    v3 = v3 % (v4 + 1);
    return v0;
}
int main(void) { return test_func(); }
