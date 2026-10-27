int test_func(void) {
    int v0 = 49;
    int v1 = 22;
    int v2 = 44;
    int v3 = 24;
    int v4 = 51;
    int v5 = 87;
    int i;
    if (v5 > v4) { v5 = v4; }
    v0 = v0 * 7;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v4;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
