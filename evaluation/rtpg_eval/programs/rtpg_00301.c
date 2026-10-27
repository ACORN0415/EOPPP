int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 97;
    int v2 = 10;
    int i;
    v0 = 10;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v1;
    }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
