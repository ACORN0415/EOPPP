int __arr_1240[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 46;
    int v2 = 52;
    int v3 = 74;
    int v4 = 89;
    int v5 = 67;
    int v6 = 23;
    int v7 = 2;
    int i;
    v1 = v1 + v4;
    for (i = 0; i < 10; i++) { __arr_1240[i] = v4 + i; }
    v4 = __arr_didx[__idx_didx[0]];
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
