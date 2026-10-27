int __arr_67[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 3;
    int v2 = 62;
    int v3 = 24;
    int v4 = 77;
    int i;
    if (v3 > v4) { v3 = v4; }
    for (i = 0; i < 10; i++) { __arr_67[i] = v0 + i; }
    for (i = 0; i < 20; i++) {
        v3 = v3 + v0;
    }
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
