int __arr_1219[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 58;
    int v2 = 41;
    int v3 = 5;
    int i;
    for (i = 0; i < 10; i++) { __arr_1219[i] = v2 + i; }
    int *__p = &v3;
    *__p = *__p + 1;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
