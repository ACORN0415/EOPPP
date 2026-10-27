int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 57;
    int v2 = 45;
    int v3 = 90;
    int v4 = 81;
    int v5 = 97;
    int v6 = 43;
    int i;
    v2 = __arr_didx[__idx_didx[0]];
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
