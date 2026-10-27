int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 68;
    int v2 = 49;
    int v3 = 65;
    int v4 = 90;
    int v5 = 22;
    int v6 = 21;
    int v7 = 42;
    int i;
    v7 = v7 * 7;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v7 = __arr_didx[__idx_didx[0]];
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
