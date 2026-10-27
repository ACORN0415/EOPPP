int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 11;
    int v2 = 9;
    int v3 = 98;
    int v4 = 85;
    int i;
    v1 = v1 * 3;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
