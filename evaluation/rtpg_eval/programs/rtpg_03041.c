int test_func(void) {
    int v0 = 40;
    int v1 = 78;
    int v2 = 11;
    int v3 = 1;
    int v4 = 72;
    int i;
    v2 = v2 * 5;
    v2 = v2 + v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
