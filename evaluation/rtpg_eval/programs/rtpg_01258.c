int __arr_1258[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 12;
    int v2 = 34;
    int v3 = 28;
    int i;
    v3 = 78;
    for (i = 0; i < 10; i++) { __arr_1258[i] = v1 + i; }
    v2 = v2 ^ v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
