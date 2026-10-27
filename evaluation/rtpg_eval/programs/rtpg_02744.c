int test_func(void) {
    int v0 = 76;
    int v1 = 67;
    int v2 = 63;
    int i;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v1;
    }
    v2 = 4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
