int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 50;
    int v2 = 0;
    int v3 = 82;
    int v4 = 37;
    int v5 = 30;
    int v6 = 56;
    int v7 = 97;
    int i;
    v0 = v0 - v5;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v2;
    *__p = *__p + 1;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
