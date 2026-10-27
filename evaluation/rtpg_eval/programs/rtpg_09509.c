int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 32;
    int v2 = 50;
    int v3 = 6;
    int v4 = 22;
    int v5 = 79;
    int v6 = 8;
    int i;
    v4 = v4 + v2;
    for (i = 0; i < 17; i++) {
        v4 = v4 + v4;
    }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
