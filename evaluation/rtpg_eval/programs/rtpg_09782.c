int test_func(void) {
    int v0 = 64;
    int v1 = 99;
    int v2 = 8;
    int v3 = 29;
    int v4 = 57;
    int v5 = 14;
    int v6 = 99;
    int i;
    for (i = 0; i < 9; i++) {
        v1 = v1 + v3;
    }
    v3 = v3 - v0;
    if (v3 > v2) { v3 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
