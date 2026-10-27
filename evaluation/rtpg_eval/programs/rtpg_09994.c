int test_func(void) {
    int v0 = 91;
    int v1 = 61;
    int v2 = 15;
    int v3 = 30;
    int v4 = 7;
    int v5 = 42;
    int i;
    v5 = v5 + v3;
    if (v4 > v0) { v4 = v0; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
