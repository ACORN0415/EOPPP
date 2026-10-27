int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 4;
    int v2 = 63;
    int v3 = 77;
    int v4 = 37;
    int v5 = 87;
    int i;
    for (i = 0; i < 17; i++) {
        v3 = v3 + v1;
    }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
