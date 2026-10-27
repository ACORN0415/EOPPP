int __arr_1383[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 37;
    int v2 = 93;
    int i;
    for (i = 0; i < 10; i++) { __arr_1383[i] = v0 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
