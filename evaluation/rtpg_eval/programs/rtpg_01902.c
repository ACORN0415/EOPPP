int __arr_1902[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 76;
    int v2 = 97;
    int v3 = 23;
    int v4 = 9;
    int i;
    for (i = 0; i < 10; i++) { __arr_1902[i] = v1 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v4;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
