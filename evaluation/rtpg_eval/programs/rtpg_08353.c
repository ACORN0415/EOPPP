int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 52;
    int v2 = 36;
    int v3 = 9;
    int v4 = 36;
    int v5 = 14;
    int i;
    v2 = v2 + v1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
