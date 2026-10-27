int test_func(void) {
    int v0 = 45;
    int v1 = 77;
    int v2 = 55;
    int v3 = 53;
    int v4 = 32;
    int i;
    for (i = 0; i < 8; i++) {
        v4 = v4 + v4;
    }
    v3 = v3 + v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
