int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 91;
    int v2 = 54;
    int v3 = 21;
    int i;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v1;
    }
    v3 = v3 + v3;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
