int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 12;
    int v2 = 93;
    int v3 = 29;
    int v4 = 87;
    int i;
    v0 = v0 * 4;
    v3 = 3;
    if (v0 > v2) { v0 = v2; }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
