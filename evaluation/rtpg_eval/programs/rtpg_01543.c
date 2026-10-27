int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 47;
    int v1 = 15;
    int v2 = 86;
    int v3 = 71;
    int v4 = 10;
    int v5 = 33;
    int v6 = 60;
    int i;
    v6 = v6 - v2;
    v3 = v3 * 6;
    v6 = __arr_didx[__idx_didx[0]];
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
