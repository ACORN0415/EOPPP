int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 5;
    int v2 = 65;
    int v3 = 47;
    int i;
    v1 = v1 - v2;
    v0 = 56;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v3;
    }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
