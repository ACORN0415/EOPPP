int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 75;
    int v2 = 88;
    int v3 = 9;
    int v4 = 0;
    int v5 = 67;
    int v6 = 38;
    int i;
    v1 = v1 - v3;
    v3 = 52;
    if (v3 > v1) { v3 = v1; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v3;
    *__p = *__p + 1;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
