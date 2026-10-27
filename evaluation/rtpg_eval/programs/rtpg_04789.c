int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 49;
    int v2 = 73;
    int v3 = 96;
    int v4 = 100;
    int v5 = 33;
    int v6 = 12;
    int i;
    v2 = v2 * 7;
    v4 = v4 - v3;
    v4 = v4 ^ v6;
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
