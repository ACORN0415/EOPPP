int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 33;
    int v2 = 42;
    int v3 = 64;
    int i;
    v3 = 20;
    v2 = v2 + v0;
    v3 = v3 * 7;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
