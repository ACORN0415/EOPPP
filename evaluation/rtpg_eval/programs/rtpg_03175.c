int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 38;
    int v2 = 24;
    int i;
    v0 = v0 * 9;
    v2 = 77;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
