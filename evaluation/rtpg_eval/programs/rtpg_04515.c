int __arr_4515[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 68;
    int v2 = 93;
    int i;
    for (i = 0; i < 10; i++) { __arr_4515[i] = v0 + i; }
    int *__p = &v1;
    *__p = *__p + 1;
    v2 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
