int __arr_4081[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 38;
    int v2 = 91;
    int v3 = 95;
    int v4 = 19;
    int i;
    if (v2 > v3) { v2 = v3; }
    v2 = v2 + v1;
    for (i = 0; i < 10; i++) { __arr_4081[i] = v3 + i; }
    v1 = v1 & v0;
    int *__p = &v2;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
