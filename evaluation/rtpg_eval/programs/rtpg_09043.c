int test_func(void) {
    int v0 = 7;
    int v1 = 52;
    int v2 = 39;
    int v3 = 95;
    int i;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v2;
    }
    if (v0 > v0) { v0 = v0; }
    v3 = v3 * 8;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
