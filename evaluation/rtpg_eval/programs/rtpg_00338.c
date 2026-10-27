int test_func(void) {
    int v0 = 29;
    int v1 = 24;
    int v2 = 18;
    int v3 = 45;
    int v4 = 45;
    int v5 = 6;
    int v6 = 52;
    int i;
    v2 = v2 * 6;
    if (v2 > v4) { v2 = v4; }
    for (i = 0; i < 10; i++) {
        v3 = v3 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
