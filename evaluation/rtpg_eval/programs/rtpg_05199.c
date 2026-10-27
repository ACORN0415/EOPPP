int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 34;
    int v2 = 12;
    int v3 = 77;
    int v4 = 41;
    int v5 = 36;
    int v6 = 26;
    int i;
    v1 = 5;
    if (v2 > v1) { v2 = v1; }
    for (i = 0; i < 12; i++) {
        v2 = v2 + v2;
    }
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
