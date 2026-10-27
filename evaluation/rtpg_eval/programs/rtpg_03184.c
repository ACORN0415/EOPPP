int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 21;
    int v2 = 34;
    int v3 = 4;
    int v4 = 18;
    int v5 = 33;
    int i;
    v0 = v0 + v0;
    v2 = v2 - v1;
    for (i = 0; i < 16; i++) {
        v3 = v3 + v3;
    }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
