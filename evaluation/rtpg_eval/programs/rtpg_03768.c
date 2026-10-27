int __arr_3768[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 80;
    int v2 = 71;
    int v3 = 27;
    int v4 = 1;
    int v5 = 19;
    int i;
    v3 = 44;
    for (i = 0; i < 10; i++) { __arr_3768[i] = v4 + i; }
    if (v5 > v0) { v5 = v0; }
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
