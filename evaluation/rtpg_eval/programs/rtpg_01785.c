int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 97;
    int v2 = 31;
    int v3 = 13;
    int v4 = 79;
    int v5 = 12;
    int v6 = 34;
    int i;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v3;
    }
    v3 = 18;
    v4 = __arr_didx[__idx_didx[0]];
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
