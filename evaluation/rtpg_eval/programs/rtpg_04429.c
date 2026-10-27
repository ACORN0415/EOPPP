int test_func(void) {
    int v0 = 16;
    int v1 = 22;
    int v2 = 26;
    int i;
    if (v2 > v2) { v2 = v2; }
    v0 = v0 + v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
