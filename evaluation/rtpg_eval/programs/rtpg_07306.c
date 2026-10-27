int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 75;
    int v2 = 8;
    int v3 = 8;
    int i;
    v1 = v1 * 10;
    int *__p = &v3;
    *__p = *__p + 1;
    v0 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
