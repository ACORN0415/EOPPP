int test_func(void) {
    int v0 = 37;
    int v1 = 76;
    int v2 = 12;
    int v3 = 39;
    int v4 = 19;
    int v5 = 54;
    int v6 = 79;
    int i;
    v3 = v3 - v1;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v6;
    }
    v5 = v5 * 7;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
