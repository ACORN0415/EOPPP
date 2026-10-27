int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 93;
    int v2 = 71;
    int v3 = 26;
    int v4 = 19;
    int v5 = 72;
    int v6 = 47;
    int v7 = 70;
    int i;
    for (i = 0; i < 6; i++) {
        v6 = v6 + v3;
    }
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
