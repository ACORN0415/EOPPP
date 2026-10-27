int test_func(void) {
    int v0 = 47;
    int v1 = 87;
    int v2 = 74;
    int v3 = 50;
    int v4 = 58;
    int i;
    for (i = 0; i < 15; i++) {
        v4 = v4 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
