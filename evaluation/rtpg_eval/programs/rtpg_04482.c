int __arr_4482[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 89;
    int v2 = 42;
    int v3 = 74;
    int v4 = 28;
    int v5 = 97;
    int v6 = 1;
    int i;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v6;
    }
    for (i = 0; i < 10; i++) { __arr_4482[i] = v6 + i; }
    v3 = v3 - v4;
    int *__p = &v4;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
