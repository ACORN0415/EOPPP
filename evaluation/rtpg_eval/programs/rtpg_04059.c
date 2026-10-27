int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 82;
    int v2 = 89;
    int v3 = 17;
    int v4 = 30;
    int v5 = 83;
    int v6 = 92;
    int v7 = 8;
    int i;
    v5 = v5 * 2;
    int *__p = &v3;
    *__p = *__p + 1;
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
