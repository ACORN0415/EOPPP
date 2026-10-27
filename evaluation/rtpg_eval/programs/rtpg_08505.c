int test_func(void) {
    int v0 = 55;
    int v1 = 2;
    int v2 = 89;
    int v3 = 42;
    int v4 = 79;
    int i;
    v1 = v1 * 6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
