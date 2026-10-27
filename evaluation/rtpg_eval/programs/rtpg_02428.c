int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 42;
    int v2 = 99;
    int v3 = 6;
    int v4 = 18;
    int v5 = 90;
    int i;
    v5 = v5 + v1;
    int *__p = &v4;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
