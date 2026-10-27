int test_func(void) {
    int v0 = 45;
    int v1 = 52;
    int v2 = 92;
    int v3 = 37;
    int v4 = 3;
    int v5 = 48;
    int v6 = 11;
    int v7 = 3;
    int i;
    if (v7 > v1) { v7 = v1; }
    v4 = v4 - v3;
    for (i = 0; i < 15; i++) {
        v6 = v6 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
