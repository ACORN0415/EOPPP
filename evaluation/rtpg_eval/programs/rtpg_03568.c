int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 95;
    int v2 = 94;
    int v3 = 13;
    int v4 = 51;
    int v5 = 33;
    int v6 = 52;
    int v7 = 87;
    int i;
    v0 = 9;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v0;
    }
    v5 = v5 * 8;
    v3 = __arr_didx[__idx_didx[0]];
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
