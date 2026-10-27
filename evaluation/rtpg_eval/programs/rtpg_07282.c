int __arr_7282[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 82;
    int v2 = 55;
    int v3 = 73;
    int v4 = 82;
    int i;
    for (i = 0; i < 10; i++) { __arr_7282[i] = v4 + i; }
    v1 = v1 * 2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = v1 / (v0 + 1);
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
