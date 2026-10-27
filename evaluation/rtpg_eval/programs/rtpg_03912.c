int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 80;
    int v2 = 73;
    int v3 = 79;
    int v4 = 96;
    int v5 = 68;
    int i;
    v0 = v0 * 6;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
