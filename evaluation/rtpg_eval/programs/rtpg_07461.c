int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 49;
    int v2 = 45;
    int v3 = 55;
    int v4 = 93;
    int v5 = 96;
    int v6 = 76;
    int v7 = 4;
    int i;
    v3 = v3 * 7;
    v1 = v1 - v2;
    v4 = __arr_didx[__idx_didx[0]];
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
