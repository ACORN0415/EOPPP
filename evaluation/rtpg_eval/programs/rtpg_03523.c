int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 1;
    int v2 = 8;
    int v3 = 100;
    int v4 = 5;
    int v5 = 4;
    int v6 = 1;
    int i;
    v6 = v6 - v3;
    if (v3 > v0) { v3 = v0; }
    v3 = v3 * 3;
    int *__p = &v3;
    *__p = *__p + 1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
