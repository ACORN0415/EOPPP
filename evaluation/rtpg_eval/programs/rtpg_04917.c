int test_func(void) {
    int v0 = 55;
    int v1 = 49;
    int v2 = 55;
    int v3 = 33;
    int v4 = 39;
    int v5 = 60;
    int v6 = 2;
    int v7 = 37;
    int i;
    v1 = v1 + v7;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
