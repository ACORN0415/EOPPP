int __arr_8472[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 60;
    int v2 = 18;
    int i;
    for (i = 0; i < 10; i++) { __arr_8472[i] = v1 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
