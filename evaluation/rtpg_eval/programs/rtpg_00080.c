int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 52;
    int v2 = 75;
    int v3 = 7;
    int v4 = 13;
    int v5 = 23;
    int v6 = 11;
    int v7 = 24;
    int i;
    v0 = v0 + v2;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
