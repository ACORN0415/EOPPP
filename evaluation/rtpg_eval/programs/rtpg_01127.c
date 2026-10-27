int test_func(void) {
    int v0 = 77;
    int v1 = 85;
    int v2 = 35;
    int v3 = 20;
    int i;
    v0 = v0 * 7;
    v2 = v2 - v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
