int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 26;
    int v2 = 10;
    int v3 = 53;
    int v4 = 96;
    int v5 = 5;
    int i;
    v3 = 90;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
