int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 4;
    int v2 = 55;
    int v3 = 93;
    int v4 = 61;
    int i;
    v0 = v0 * 9;
    v4 = v4 + v4;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
