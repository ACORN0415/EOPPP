int __arr_5566[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 55;
    int v2 = 10;
    int v3 = 69;
    int i;
    v1 = 46;
    for (i = 0; i < 10; i++) { __arr_5566[i] = v3 + i; }
    int *__p = &v0;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
