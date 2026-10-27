int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 95;
    int v2 = 69;
    int v3 = 25;
    int v4 = 40;
    int v5 = 62;
    int v6 = 97;
    int v7 = 51;
    int i;
    v0 = v0 + v0;
    int *__p = &v7;
    *__p = *__p + 1;
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
