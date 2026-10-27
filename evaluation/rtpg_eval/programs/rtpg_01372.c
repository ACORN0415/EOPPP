int test_func(void) {
    int v0 = 75;
    int v1 = 66;
    int v2 = 14;
    int i;
    v0 = v0 - v2;
    v1 = v1 * 5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
