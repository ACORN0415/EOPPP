int test_func(void) {
    int v0 = 22;
    int v1 = 88;
    int v2 = 38;
    int v3 = 33;
    int i;
    v2 = 59;
    v2 = v2 * 10;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
