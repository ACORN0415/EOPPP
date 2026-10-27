int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 30;
    int v2 = 30;
    int v3 = 7;
    int v4 = 45;
    int v5 = 91;
    int v6 = 94;
    int i;
    for (i = 0; i < 18; i++) {
        v6 = v6 + v1;
    }
    v2 = __arr_didx[__idx_didx[0]];
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
