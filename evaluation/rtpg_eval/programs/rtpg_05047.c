int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 8;
    int v2 = 75;
    int v3 = 19;
    int v4 = 16;
    int v5 = 61;
    int v6 = 74;
    int i;
    for (i = 0; i < 8; i++) {
        v5 = v5 + v3;
    }
    v5 = v5 + v0;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
