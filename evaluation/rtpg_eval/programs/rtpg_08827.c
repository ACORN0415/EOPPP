int test_func(void) {
    int v0 = 18;
    int v1 = 11;
    int v2 = 14;
    int v3 = 96;
    int v4 = 16;
    int v5 = 69;
    int v6 = 38;
    int i;
    v5 = v5 * 9;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
