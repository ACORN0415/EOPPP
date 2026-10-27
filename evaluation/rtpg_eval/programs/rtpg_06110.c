int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 31;
    int v1 = 29;
    int v2 = 69;
    int v3 = 8;
    int v4 = 69;
    int v5 = 7;
    int v6 = 34;
    int v7 = 55;
    int i;
    v7 = v7 - v5;
    v7 = v7 * 8;
    v2 = __arr_didx[__idx_didx[0]];
    v7 = v7 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
