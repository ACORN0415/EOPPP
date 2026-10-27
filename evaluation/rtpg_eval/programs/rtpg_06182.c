int test_func(void) {
    int v0 = 63;
    int v1 = 79;
    int v2 = 75;
    int v3 = 12;
    int v4 = 67;
    int v5 = 44;
    int v6 = 47;
    int i;
    for (i = 0; i < 20; i++) {
        v4 = v4 + v1;
    }
    if (v2 > v2) { v2 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
