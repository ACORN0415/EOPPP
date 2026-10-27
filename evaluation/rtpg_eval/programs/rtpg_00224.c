int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 41;
    int v2 = 98;
    int v3 = 86;
    int v4 = 36;
    int v5 = 57;
    int v6 = 3;
    int i;
    v0 = v0 * 3;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
