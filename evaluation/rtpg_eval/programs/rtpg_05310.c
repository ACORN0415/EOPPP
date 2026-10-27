int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 80;
    int v2 = 92;
    int v3 = 42;
    int v4 = 3;
    int v5 = 5;
    int i;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v5;
    }
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
