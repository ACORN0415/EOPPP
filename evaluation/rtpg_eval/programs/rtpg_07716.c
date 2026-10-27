int test_func(void) {
    int v0 = 31;
    int v1 = 3;
    int v2 = 85;
    int i;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v1;
    }
    v2 = v2 + v2;
    v0 = v0 ^ v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
