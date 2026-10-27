int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 77;
    int v2 = 65;
    int v3 = 72;
    int v4 = 58;
    int v5 = 65;
    int v6 = 30;
    int v7 = 41;
    int i;
    v3 = 8;
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
