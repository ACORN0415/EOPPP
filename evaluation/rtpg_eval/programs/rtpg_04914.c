int __arr_4914[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 12;
    int v2 = 14;
    int v3 = 19;
    int v4 = 99;
    int v5 = 50;
    int i;
    if (v3 > v1) { v3 = v1; }
    for (i = 0; i < 10; i++) { __arr_4914[i] = v4 + i; }
    v5 = v5 % (v3 + 1);
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
