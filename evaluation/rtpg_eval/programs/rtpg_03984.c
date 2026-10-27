int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 97;
    int v2 = 93;
    int v3 = 100;
    int v4 = 65;
    int v5 = 3;
    int v6 = 86;
    int v7 = 59;
    int i;
    v5 = v5 + v7;
    int *__p = &v1;
    *__p = *__p + 1;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
