int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 34;
    int v2 = 4;
    int v3 = 60;
    int v4 = 23;
    int v5 = 74;
    int v6 = 86;
    int i;
    v1 = v1 + v3;
    v5 = v5 - v2;
    if (v4 > v5) { v4 = v5; }
    int *__p = &v0;
    *__p = *__p + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
