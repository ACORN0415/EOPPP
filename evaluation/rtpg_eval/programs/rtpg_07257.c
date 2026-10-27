int test_func(void) {
    int v0 = 45;
    int v1 = 27;
    int v2 = 7;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v2 = v2 ^ v0;
    return v0;
}
int main(void) { return test_func(); }
