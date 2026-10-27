int __arr_3696[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 54;
    int v2 = 49;
    int v3 = 3;
    int v4 = 11;
    int i;
    for (i = 0; i < 10; i++) { __arr_3696[i] = v4 + i; }
    v0 = v0 * 3;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
