int __arr_5406[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 3;
    int v2 = 50;
    int v3 = 55;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v2;
    }
    v0 = v0 - v3;
    for (i = 0; i < 10; i++) { __arr_5406[i] = v3 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
