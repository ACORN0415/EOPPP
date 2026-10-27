int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 30;
    int v2 = 33;
    int v3 = 18;
    int v4 = 33;
    int i;
    v1 = v1 + v1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
