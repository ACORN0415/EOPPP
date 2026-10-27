int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 68;
    int v2 = 34;
    int v3 = 75;
    int v4 = 78;
    int v5 = 55;
    int i;
    if (v3 > v0) { v3 = v0; }
    v3 = 45;
    v2 = __arr_didx[__idx_didx[0]];
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
