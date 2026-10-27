int test_func(void) {
    int v0 = 26;
    int v1 = 91;
    int v2 = 99;
    int v3 = 58;
    int i;
    v1 = v1 - v0;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
