int test_func(void) {
    int v0 = 27;
    int v1 = 56;
    int v2 = 87;
    int i;
    v1 = v1 + v2;
    if (v0 > v1) { v0 = v1; }
    v1 = v1 * 5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
