int test_func(void) {
    int v0 = 55;
    int v1 = 3;
    int v2 = 65;
    int v3 = 11;
    int v4 = 84;
    int v5 = 23;
    int v6 = 64;
    int v7 = 20;
    int i;
    if (v3 > v0) { v3 = v0; }
    v5 = v5 + v7;
    v2 = v2 - v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
