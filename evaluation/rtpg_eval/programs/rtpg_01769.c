int test_func(void) {
    int v0 = 45;
    int v1 = 44;
    int v2 = 36;
    int v3 = 38;
    int v4 = 42;
    int v5 = 92;
    int i;
    v2 = 94;
    for (i = 0; i < 5; i++) {
        v5 = v5 + v4;
    }
    if (v2 > v5) { v2 = v5; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v1 = v1 ^ v4;
    return v0;
}
int main(void) { return test_func(); }
