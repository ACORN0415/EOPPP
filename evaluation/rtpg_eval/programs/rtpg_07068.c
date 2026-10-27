int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 90;
    int v2 = 100;
    int v3 = 96;
    int i;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
