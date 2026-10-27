int __arr_6706[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 58;
    int v2 = 27;
    int v3 = 77;
    int v4 = 85;
    int i;
    for (i = 0; i < 10; i++) { __arr_6706[i] = v0 + i; }
    v2 = v2 * 6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
