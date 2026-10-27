int test_func(void) {
    int v0 = 42;
    int v1 = 46;
    int v2 = 13;
    int v3 = 62;
    int v4 = 32;
    int v5 = 50;
    int v6 = 3;
    int i;
    v4 = v4 * 6;
    v4 = v4 - v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
