int __arr_3458[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 99;
    int v2 = 26;
    int v3 = 25;
    int v4 = 50;
    int v5 = 78;
    int v6 = 37;
    int i;
    for (i = 0; i < 10; i++) { __arr_3458[i] = v3 + i; }
    v1 = 43;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
