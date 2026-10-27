int test_func(void) {
    int v0 = 35;
    int v1 = 54;
    int v2 = 67;
    int i;
    v0 = 88;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
