int test_func(void) {
    int v0 = 64;
    int v1 = 63;
    int v2 = 13;
    int v3 = 12;
    int i;
    v2 = 53;
    v3 = v3 - v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
