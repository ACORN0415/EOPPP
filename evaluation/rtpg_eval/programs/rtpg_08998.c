int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 78;
    int v2 = 62;
    int v3 = 94;
    int i;
    v3 = v3 + v0;
    if (v2 > v1) { v2 = v1; }
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
