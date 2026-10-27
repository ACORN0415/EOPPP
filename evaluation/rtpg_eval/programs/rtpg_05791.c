int __arr_5791[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 45;
    int v2 = 77;
    int v3 = 22;
    int v4 = 4;
    int v5 = 47;
    int v6 = 10;
    int v7 = 80;
    int i;
    for (i = 0; i < 10; i++) { __arr_5791[i] = v2 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v6;
    *__p = *__p + 1;
    v4 = v4 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
