int __arr_668[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 29;
    int v2 = 68;
    int v3 = 25;
    int v4 = 1;
    int v5 = 21;
    int v6 = 7;
    int i;
    if (v4 > v5) { v4 = v5; }
    for (i = 0; i < 10; i++) { __arr_668[i] = v1 + i; }
    for (i = 0; i < 15; i++) {
        v4 = v4 + v2;
    }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
