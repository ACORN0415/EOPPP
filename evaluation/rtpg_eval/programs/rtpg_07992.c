int test_func(void) {
    int v0 = 67;
    int v1 = 17;
    int v2 = 95;
    int v3 = 96;
    int v4 = 15;
    int v5 = 16;
    int i;
    for (i = 0; i < 19; i++) {
        v4 = v4 + v5;
    }
    if (v0 > v1) { v0 = v1; }
    v3 = v3 | v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
