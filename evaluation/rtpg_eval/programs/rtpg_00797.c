int test_func(void) {
    int v0 = 52;
    int v1 = 54;
    int v2 = 60;
    int v3 = 90;
    int v4 = 58;
    int v5 = 27;
    int v6 = 0;
    int v7 = 9;
    int i;
    if (v7 > v3) { v7 = v3; }
    v1 = v1 * 10;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
