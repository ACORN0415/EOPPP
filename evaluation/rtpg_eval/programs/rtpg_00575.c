int test_func(void) {
    int v0 = 94;
    int v1 = 31;
    int v2 = 43;
    int v3 = 90;
    int v4 = 9;
    int v5 = 42;
    int v6 = 74;
    int v7 = 64;
    int i;
    for (i = 0; i < 6; i++) {
        v7 = v7 + v6;
    }
    if (v3 > v2) { v3 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
