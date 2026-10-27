int test_func(void) {
    int v0 = 14;
    int v1 = 67;
    int v2 = 34;
    int v3 = 65;
    int i;
    v1 = v1 * 4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
