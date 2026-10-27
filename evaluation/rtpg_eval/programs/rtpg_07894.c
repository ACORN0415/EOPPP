int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 70;
    int v2 = 42;
    int v3 = 53;
    int v4 = 9;
    int v5 = 2;
    int i;
    v3 = 83;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
