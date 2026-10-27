int test_func(void) {
    int v0 = 66;
    int v1 = 65;
    int v2 = 91;
    int v3 = 79;
    int i;
    v3 = v3 * 9;
    v3 = v3 + v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
