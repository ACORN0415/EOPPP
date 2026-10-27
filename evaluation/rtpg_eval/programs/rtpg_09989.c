int test_func(void) {
    int v0 = 2;
    int v1 = 60;
    int v2 = 98;
    int v3 = 29;
    int i;
    v1 = 30;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
