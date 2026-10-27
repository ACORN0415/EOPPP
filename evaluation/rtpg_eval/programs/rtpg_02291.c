int test_func(void) {
    int v0 = 30;
    int v1 = 55;
    int v2 = 51;
    int i;
    v1 = 62;
    v2 = v2 * 8;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
