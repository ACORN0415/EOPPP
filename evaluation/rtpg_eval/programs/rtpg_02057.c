int test_func(void) {
    int v0 = 91;
    int v1 = 31;
    int v2 = 7;
    int i;
    v2 = v2 * 4;
    if (v1 > v0) { v1 = v0; }
    v2 = v2 - v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
