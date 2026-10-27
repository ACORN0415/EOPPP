int test_func(void) {
    int v0 = 10;
    int v1 = 14;
    int v2 = 55;
    int v3 = 27;
    int v4 = 20;
    int i;
    v2 = v2 - v0;
    v3 = v3 + v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
