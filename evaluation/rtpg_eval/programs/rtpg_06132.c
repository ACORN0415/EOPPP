int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 72;
    int v2 = 0;
    int v3 = 25;
    int i;
    v3 = v3 - v0;
    v1 = v1 * 4;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
