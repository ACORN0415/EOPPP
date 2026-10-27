int test_func(void) {
    int v0 = 53;
    int v1 = 86;
    int v2 = 90;
    int i;
    v2 = 35;
    v2 = v2 + v2;
    v2 = v2 * 5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
