int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 33;
    int v2 = 28;
    int v3 = 38;
    int v4 = 61;
    int v5 = 40;
    int i;
    v1 = v1 - v5;
    if (v2 > v5) { v2 = v5; }
    v3 = v3 * 8;
    v4 = __arr_didx[__idx_didx[0]];
    v3 = v3 | v0;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
