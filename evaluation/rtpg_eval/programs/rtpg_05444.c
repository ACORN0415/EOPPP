int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 58;
    int v2 = 43;
    int v3 = 38;
    int v4 = 56;
    int v5 = 25;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v1;
    }
    v4 = v4 * 4;
    if (v4 > v4) { v4 = v4; }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
