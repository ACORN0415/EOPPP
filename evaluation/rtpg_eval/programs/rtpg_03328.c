int __arr_3328[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 27;
    int v2 = 86;
    int v3 = 58;
    int v4 = 59;
    int v5 = 58;
    int i;
    for (i = 0; i < 10; i++) { __arr_3328[i] = v2 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = __arr_didx[__idx_didx[0]];
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
