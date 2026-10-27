int test_func(void) {
    int v0 = 91;
    int v1 = 15;
    int v2 = 53;
    int v3 = 63;
    int v4 = 73;
    int v5 = 89;
    int v6 = 42;
    int i;
    v4 = v4 * 2;
    v4 = v4 - v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
