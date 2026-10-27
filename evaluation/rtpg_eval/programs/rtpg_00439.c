int test_func(void) {
    int v0 = 48;
    int v1 = 75;
    int v2 = 57;
    int v3 = 46;
    int v4 = 9;
    int i;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v2;
    }
    v2 = v2 * 6;
    if (v2 > v2) { v2 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
