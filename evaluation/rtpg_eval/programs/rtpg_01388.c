int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 95;
    int v2 = 6;
    int v3 = 86;
    int v4 = 76;
    int i;
    v0 = 66;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
