int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 13;
    int v2 = 14;
    int i;
    v1 = v1 - v2;
    v1 = v1 * 9;
    v2 = __arr_didx[__idx_didx[0]];
    v1 = v1 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
