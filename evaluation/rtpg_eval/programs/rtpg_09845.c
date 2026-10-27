int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 83;
    int v2 = 28;
    int v3 = 63;
    int i;
    v1 = 50;
    v1 = v1 + v3;
    v1 = v1 * 3;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
