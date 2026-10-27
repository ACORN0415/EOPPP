int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 53;
    int v2 = 1;
    int i;
    v2 = 70;
    v0 = v0 | v2;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
