int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 15;
    int v2 = 67;
    int v3 = 7;
    int v4 = 6;
    int v5 = 88;
    int v6 = 32;
    int v7 = 46;
    int i;
    for (i = 0; i < 5; i++) {
        v4 = v4 + v1;
    }
    v6 = v6 - v7;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
