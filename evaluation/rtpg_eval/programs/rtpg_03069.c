int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 50;
    int v2 = 83;
    int v3 = 8;
    int v4 = 50;
    int v5 = 73;
    int v6 = 0;
    int i;
    v2 = 7;
    for (i = 0; i < 15; i++) {
        v4 = v4 + v6;
    }
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
