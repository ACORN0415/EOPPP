int __arr_4912[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 76;
    int v2 = 20;
    int v3 = 18;
    int v4 = 53;
    int i;
    for (i = 0; i < 10; i++) { __arr_4912[i] = v3 + i; }
    v1 = v1 - v4;
    int *__p = &v1;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
