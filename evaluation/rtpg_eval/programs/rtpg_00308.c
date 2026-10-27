int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 64;
    int v2 = 76;
    int v3 = 29;
    int v4 = 26;
    int v5 = 26;
    int v6 = 6;
    int i;
    if (v1 > v5) { v1 = v5; }
    for (i = 0; i < 13; i++) {
        v3 = v3 + v4;
    }
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
