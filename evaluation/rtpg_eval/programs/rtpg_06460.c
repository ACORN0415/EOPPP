int test_func(void) {
    int v0 = 22;
    int v1 = 55;
    int v2 = 60;
    int v3 = 75;
    int v4 = 86;
    int v5 = 10;
    int i;
    v2 = v2 * 3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
