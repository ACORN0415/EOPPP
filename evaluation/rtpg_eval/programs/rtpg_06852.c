int __arr_6852[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 64;
    int v2 = 60;
    int v3 = 33;
    int v4 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_6852[i] = v4 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v2;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
