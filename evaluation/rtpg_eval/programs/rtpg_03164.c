int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 19;
    int v2 = 91;
    int v3 = 96;
    int i;
    v2 = v2 - v3;
    v3 = v3 * 4;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
