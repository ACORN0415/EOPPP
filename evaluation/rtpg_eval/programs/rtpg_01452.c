int test_func(void) {
    int v0 = 56;
    int v1 = 82;
    int v2 = 45;
    int v3 = 1;
    int v4 = 32;
    int v5 = 27;
    int i;
    v2 = 93;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
