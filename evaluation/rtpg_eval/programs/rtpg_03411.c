int test_func(void) {
    int v0 = 64;
    int v1 = 42;
    int v2 = 11;
    int v3 = 85;
    int v4 = 1;
    int v5 = 6;
    int v6 = 27;
    int i;
    v0 = 18;
    v0 = v0 + v2;
    v6 = v6 & v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
