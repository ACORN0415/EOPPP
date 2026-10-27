int test_func(void) {
    int v0 = 43;
    int v1 = 37;
    int v2 = 7;
    int v3 = 21;
    int v4 = 87;
    int i;
    v1 = v1 + v1;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v0;
    }
    v3 = 38;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
