int __arr_2700[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 88;
    int v2 = 74;
    int v3 = 18;
    int i;
    for (i = 0; i < 10; i++) { __arr_2700[i] = v0 + i; }
    v0 = 26;
    if (v1 > v0) { v1 = v0; }
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
