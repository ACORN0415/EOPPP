int __arr_1089[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 26;
    int v2 = 42;
    int v3 = 48;
    int v4 = 53;
    int i;
    for (i = 0; i < 10; i++) { __arr_1089[i] = v4 + i; }
    v3 = 17;
    v0 = v0 + v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v3 = __arr_didx[__idx_didx[0]];
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
