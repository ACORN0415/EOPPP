int __arr_9510[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 54;
    int v2 = 25;
    int v3 = 33;
    int i;
    for (i = 0; i < 10; i++) { __arr_9510[i] = v2 + i; }
    int *__p = &v3;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
