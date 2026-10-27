int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 47;
    int v2 = 79;
    int v3 = 72;
    int v4 = 6;
    int v5 = 25;
    int v6 = 14;
    int v7 = 77;
    int i;
    v4 = 60;
    for (i = 0; i < 19; i++) {
        v5 = v5 + v2;
    }
    v4 = __arr_didx[__idx_didx[0]];
    v1 = v1 / (v5 + 1);
    return v0;
}
int main(void) { return test_func(); }
