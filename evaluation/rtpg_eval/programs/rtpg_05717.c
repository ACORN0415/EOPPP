int __arr_5717[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 11;
    int v2 = 8;
    int v3 = 78;
    int i;
    for (i = 0; i < 10; i++) { __arr_5717[i] = v1 + i; }
    v2 = v2 - v3;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
