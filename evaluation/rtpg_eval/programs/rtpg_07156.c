int test_func(void) {
    int v0 = 40;
    int v1 = 86;
    int v2 = 41;
    int v3 = 80;
    int i;
    v2 = v2 * 8;
    if (v3 > v0) { v3 = v0; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
