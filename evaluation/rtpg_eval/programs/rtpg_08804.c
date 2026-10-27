int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 37;
    int v2 = 52;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v1;
    }
    v1 = v1 * 2;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
