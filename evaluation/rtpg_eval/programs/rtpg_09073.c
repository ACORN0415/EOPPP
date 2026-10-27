int test_func(void) {
    int v0 = 54;
    int v1 = 37;
    int v2 = 37;
    int v3 = 87;
    int v4 = 94;
    int v5 = 84;
    int v6 = 23;
    int v7 = 75;
    int i;
    v0 = v0 - v6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
