int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 67;
    int v2 = 23;
    int v3 = 39;
    int v4 = 65;
    int v5 = 86;
    int i;
    v2 = 75;
    for (i = 0; i < 6; i++) {
        v4 = v4 + v1;
    }
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
