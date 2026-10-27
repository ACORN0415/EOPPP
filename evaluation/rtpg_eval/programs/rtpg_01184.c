int test_func(void) {
    int v0 = 87;
    int v1 = 14;
    int v2 = 42;
    int i;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
