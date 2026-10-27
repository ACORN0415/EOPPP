int __arr_4807[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 29;
    int v2 = 3;
    int v3 = 45;
    int i;
    for (i = 0; i < 10; i++) { __arr_4807[i] = v1 + i; }
    v3 = v3 - v2;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
