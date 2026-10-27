int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 87;
    int v2 = 91;
    int v3 = 62;
    int v4 = 49;
    int v5 = 29;
    int v6 = 89;
    int v7 = 3;
    int i;
    v0 = v0 - v4;
    v1 = v1 * 4;
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
