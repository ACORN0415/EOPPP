int test_func(void) {
    int v0 = 56;
    int v1 = 14;
    int v2 = 83;
    int i;
    v0 = 27;
    v0 = v0 + v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = v2 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
