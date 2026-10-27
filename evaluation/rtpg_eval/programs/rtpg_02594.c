int test_func(void) {
    int v0 = 51;
    int v1 = 45;
    int v2 = 63;
    int v3 = 18;
    int v4 = 78;
    int v5 = 54;
    int v6 = 73;
    int i;
    if (v2 > v4) { v2 = v4; }
    v3 = v3 + v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
