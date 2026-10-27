int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 78;
    int v2 = 93;
    int i;
    v0 = v0 - v2;
    if (v2 > v0) { v2 = v0; }
    int *__p = &v0;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
