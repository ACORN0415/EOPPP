int __arr_3334[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 73;
    int v2 = 25;
    int v3 = 33;
    int v4 = 14;
    int v5 = 40;
    int v6 = 35;
    int v7 = 6;
    int i;
    for (i = 0; i < 10; i++) { __arr_3334[i] = v3 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v7;
    *__p = *__p + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
