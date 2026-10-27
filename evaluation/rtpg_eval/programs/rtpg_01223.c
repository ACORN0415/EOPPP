int test_func(void) {
    int v0 = 1;
    int v1 = 2;
    int v2 = 8;
    int v3 = 55;
    int v4 = 36;
    int v5 = 98;
    int v6 = 10;
    int v7 = 40;
    int i;
    v5 = 67;
    v6 = v6 - v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
