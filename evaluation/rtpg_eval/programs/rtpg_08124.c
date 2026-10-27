int test_func(void) {
    int v0 = 37;
    int v1 = 62;
    int v2 = 8;
    int v3 = 38;
    int v4 = 40;
    int i;
    v3 = v3 - v0;
    v1 = v1 + v1;
    if (v4 > v2) { v4 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
