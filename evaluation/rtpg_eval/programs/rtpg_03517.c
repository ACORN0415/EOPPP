int __arr_3517[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 68;
    int v2 = 15;
    int v3 = 19;
    int v4 = 48;
    int v5 = 47;
    int v6 = 29;
    int v7 = 73;
    int i;
    for (i = 0; i < 5; i++) {
        v5 = v5 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_3517[i] = v0 + i; }
    v7 = 93;
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
