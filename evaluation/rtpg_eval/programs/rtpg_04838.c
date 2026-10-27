int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 93;
    int v2 = 60;
    int i;
    v2 = v2 * 5;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v2;
    }
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
