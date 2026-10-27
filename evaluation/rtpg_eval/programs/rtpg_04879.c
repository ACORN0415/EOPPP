int test_func(void) {
    int v0 = 34;
    int v1 = 99;
    int v2 = 18;
    int v3 = 66;
    int v4 = 95;
    int v5 = 15;
    int v6 = 62;
    int v7 = 53;
    int i;
    v1 = v1 + v4;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v7;
    }
    if (v2 > v6) { v2 = v6; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
