int test_func(void) {
    int v0 = 39;
    int v1 = 90;
    int v2 = 18;
    int i;
    v1 = 40;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
