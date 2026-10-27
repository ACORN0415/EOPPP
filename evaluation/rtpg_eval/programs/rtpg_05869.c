int test_func(void) {
    int v0 = 62;
    int v1 = 38;
    int v2 = 73;
    int v3 = 6;
    int v4 = 12;
    int i;
    v0 = v0 * 9;
    v4 = v4 + v3;
    v4 = v4 - v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
