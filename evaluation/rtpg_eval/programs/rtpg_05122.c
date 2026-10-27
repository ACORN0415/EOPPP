int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 5;
    int v2 = 8;
    int v3 = 98;
    int v4 = 4;
    int v5 = 76;
    int i;
    v0 = v0 * 9;
    v3 = v3 + v5;
    if (v3 > v5) { v3 = v5; }
    v0 = __arr_didx[__idx_didx[0]];
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
