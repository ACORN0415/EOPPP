int test_func(void) {
    int v0 = 74;
    int v1 = 67;
    int v2 = 69;
    int v3 = 63;
    int i;
    v3 = v3 - v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
