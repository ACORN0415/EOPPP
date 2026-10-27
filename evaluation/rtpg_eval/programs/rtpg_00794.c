int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 0;
    int v2 = 16;
    int v3 = 99;
    int v4 = 36;
    int v5 = 45;
    int i;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v3;
    }
    v0 = v0 - v3;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
