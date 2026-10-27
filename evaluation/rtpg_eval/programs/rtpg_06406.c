int test_func(void) {
    int v0 = 39;
    int v1 = 96;
    int v2 = 80;
    int v3 = 21;
    int i;
    v0 = 64;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v3 = v3 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
