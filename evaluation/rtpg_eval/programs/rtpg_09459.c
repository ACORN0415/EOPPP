int test_func(void) {
    int v0 = 87;
    int v1 = 94;
    int v2 = 42;
    int v3 = 79;
    int v4 = 25;
    int i;
    v3 = 91;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v1 = v1 / (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
