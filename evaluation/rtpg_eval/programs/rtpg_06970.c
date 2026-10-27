int test_func(void) {
    int v0 = 73;
    int v1 = 0;
    int v2 = 52;
    int v3 = 75;
    int i;
    for (i = 0; i < 16; i++) {
        v3 = v3 + v1;
    }
    v0 = v0 - v2;
    v3 = 15;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
