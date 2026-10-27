int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 39;
    int v2 = 67;
    int v3 = 20;
    int v4 = 15;
    int v5 = 44;
    int i;
    v0 = 62;
    v1 = v1 - v3;
    v3 = __arr_didx[__idx_didx[0]];
    int *__p = &v2;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
