int __arr_3761[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 22;
    int v2 = 84;
    int i;
    for (i = 0; i < 10; i++) { __arr_3761[i] = v0 + i; }
    v2 = v2 + v2;
    v0 = v0 * 6;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
