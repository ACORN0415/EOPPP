int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 31;
    int v2 = 95;
    int v3 = 93;
    int v4 = 55;
    int v5 = 98;
    int i;
    v2 = 71;
    for (i = 0; i < 12; i++) {
        v4 = v4 + v5;
    }
    if (v1 > v3) { v1 = v3; }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
