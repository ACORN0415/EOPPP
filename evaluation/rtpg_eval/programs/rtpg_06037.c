int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 54;
    int v2 = 86;
    int v3 = 34;
    int i;
    v0 = v0 + v3;
    v1 = 81;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
