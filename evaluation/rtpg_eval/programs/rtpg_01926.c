int __arr_1926[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 97;
    int v2 = 31;
    int v3 = 40;
    int v4 = 42;
    int v5 = 86;
    int v6 = 67;
    int v7 = 6;
    int i;
    for (i = 0; i < 10; i++) { __arr_1926[i] = v1 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
