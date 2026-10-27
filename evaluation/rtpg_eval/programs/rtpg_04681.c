int test_func(void) {
    int v0 = 20;
    int v1 = 91;
    int v2 = 53;
    int v3 = 22;
    int v4 = 63;
    int v5 = 39;
    int i;
    v0 = 25;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
