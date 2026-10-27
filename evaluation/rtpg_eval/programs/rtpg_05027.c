int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 87;
    int v2 = 3;
    int v3 = 29;
    int v4 = 78;
    int v5 = 89;
    int v6 = 31;
    int v7 = 46;
    int i;
    if (v1 > v4) { v1 = v4; }
    v1 = 94;
    int *__p = &v5;
    *__p = *__p + 1;
    v0 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
