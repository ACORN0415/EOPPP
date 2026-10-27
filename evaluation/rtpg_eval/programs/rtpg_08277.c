int __arr_8277[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 26;
    int v2 = 62;
    int i;
    for (i = 0; i < 10; i++) { __arr_8277[i] = v1 + i; }
    v2 = v2 * 2;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
