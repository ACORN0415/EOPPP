int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 96;
    int v2 = 50;
    int v3 = 34;
    int v4 = 83;
    int v5 = 81;
    int v6 = 3;
    int i;
    v1 = v1 * 10;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
