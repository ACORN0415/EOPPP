int __arr_7181[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 93;
    int v2 = 19;
    int v3 = 25;
    int v4 = 78;
    int i;
    for (i = 0; i < 10; i++) { __arr_7181[i] = v3 + i; }
    for (i = 0; i < 8; i++) {
        v4 = v4 + v2;
    }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
