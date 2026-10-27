int test_func(void) {
    int v0 = 62;
    int v1 = 99;
    int v2 = 51;
    int v3 = 57;
    int i;
    v3 = v3 - v2;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v3;
    }
    v1 = v1 + v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
