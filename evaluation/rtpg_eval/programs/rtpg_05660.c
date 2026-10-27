int test_func(void) {
    int v0 = 91;
    int v1 = 23;
    int v2 = 13;
    int v3 = 61;
    int i;
    v3 = v3 - v1;
    v2 = v2 * 8;
    v0 = v0 & v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
