int test_func(void) {
    int v0 = 48;
    int v1 = 70;
    int v2 = 82;
    int v3 = 49;
    int i;
    v1 = v1 * 5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v1 = v1 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
