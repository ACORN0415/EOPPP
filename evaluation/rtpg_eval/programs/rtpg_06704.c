int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 11;
    int v2 = 34;
    int v3 = 55;
    int v4 = 25;
    int v5 = 66;
    int v6 = 4;
    int v7 = 71;
    int i;
    v2 = v2 + v1;
    v7 = 22;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
