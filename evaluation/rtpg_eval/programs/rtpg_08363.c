int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 8;
    int v2 = 30;
    int i;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v2;
    }
    v1 = v1 + v0;
    v2 = __arr_didx[__idx_didx[0]];
    v2 = v2 % (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
