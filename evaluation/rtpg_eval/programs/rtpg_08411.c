int test_func(void) {
    int v0 = 26;
    int v1 = 55;
    int v2 = 18;
    int v3 = 3;
    int i;
    if (v2 > v0) { v2 = v0; }
    v1 = v1 * 7;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
