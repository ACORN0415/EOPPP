int test_func(void) {
    int v0 = 41;
    int v1 = 42;
    int v2 = 14;
    int v3 = 90;
    int v4 = 98;
    int v5 = 35;
    int v6 = 15;
    int i;
    v6 = v6 - v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
