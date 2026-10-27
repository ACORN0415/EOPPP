int test_func(void) {
    int v0 = 20;
    int v1 = 67;
    int v2 = 76;
    int v3 = 43;
    int v4 = 4;
    int i;
    v0 = v0 - v4;
    v3 = v3 * 6;
    if (v3 > v0) { v3 = v0; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
