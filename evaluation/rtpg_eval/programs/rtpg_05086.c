int __arr_5086[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 88;
    int v2 = 9;
    int i;
    for (i = 0; i < 10; i++) { __arr_5086[i] = v1 + i; }
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
