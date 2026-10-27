int test_func(void) {
    int v0 = 71;
    int v1 = 19;
    int v2 = 80;
    int v3 = 34;
    int v4 = 0;
    int v5 = 96;
    int i;
    v2 = 24;
    for (i = 0; i < 18; i++) {
        v3 = v3 + v0;
    }
    v1 = v1 ^ v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
