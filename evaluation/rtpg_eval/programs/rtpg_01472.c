int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 68;
    int v2 = 35;
    int v3 = 24;
    int v4 = 62;
    int i;
    if (v3 > v2) { v3 = v2; }
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
