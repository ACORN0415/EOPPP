int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 2;
    int v2 = 16;
    int v3 = 87;
    int i;
    v2 = 51;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
