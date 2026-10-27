int __arr_4040[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 29;
    int v2 = 7;
    int v3 = 74;
    int v4 = 86;
    int v5 = 33;
    int i;
    v4 = v4 * 5;
    for (i = 0; i < 10; i++) { __arr_4040[i] = v0 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
