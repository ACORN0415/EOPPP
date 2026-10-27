int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 67;
    int v2 = 45;
    int v3 = 26;
    int v4 = 84;
    int v5 = 88;
    int v6 = 95;
    int v7 = 67;
    int i;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v2;
    }
    v4 = v4 + v3;
    v6 = v6 - v1;
    v4 = v4 / (v6 + 1);
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
