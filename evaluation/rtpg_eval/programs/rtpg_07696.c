int test_func(void) {
    int v0 = 37;
    int v1 = 15;
    int v2 = 10;
    int v3 = 2;
    int v4 = 18;
    int v5 = 98;
    int i;
    if (v3 > v4) { v3 = v4; }
    for (i = 0; i < 9; i++) {
        v4 = v4 + v0;
    }
    v0 = v0 * 2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
