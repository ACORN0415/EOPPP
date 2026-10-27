int test_func(void) {
    int v0 = 47;
    int v1 = 94;
    int v2 = 87;
    int v3 = 54;
    int v4 = 45;
    int v5 = 34;
    int v6 = 15;
    int v7 = 77;
    int i;
    v1 = v1 * 9;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
