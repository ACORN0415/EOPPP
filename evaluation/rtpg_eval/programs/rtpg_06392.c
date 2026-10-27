int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 40;
    int v2 = 59;
    int v3 = 91;
    int v4 = 36;
    int v5 = 57;
    int v6 = 7;
    int v7 = 29;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v7;
    }
    v6 = v6 * 7;
    v4 = __arr_didx[__idx_didx[0]];
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
