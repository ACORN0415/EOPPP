int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 27;
    int v2 = 11;
    int v3 = 37;
    int v4 = 39;
    int v5 = 57;
    int i;
    v0 = v0 * 8;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v4 = __arr_didx[__idx_didx[0]];
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
