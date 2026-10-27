int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 51;
    int v2 = 50;
    int v3 = 82;
    int v4 = 73;
    int v5 = 29;
    int v6 = 98;
    int v7 = 9;
    int i;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v3;
    }
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
