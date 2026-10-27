int __arr_5720[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 79;
    int v2 = 38;
    int i;
    for (i = 0; i < 10; i++) { __arr_5720[i] = v1 + i; }
    v0 = v0 + v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
