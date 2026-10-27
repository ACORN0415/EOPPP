int test_func(void) {
    int v0 = 53;
    int v1 = 25;
    int v2 = 91;
    int i;
    v0 = v0 - v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
