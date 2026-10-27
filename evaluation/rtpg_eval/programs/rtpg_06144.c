int test_func(void) {
    int v0 = 66;
    int v1 = 24;
    int v2 = 100;
    int v3 = 58;
    int v4 = 29;
    int v5 = 83;
    int v6 = 25;
    int i;
    v4 = v4 * 2;
    if (v4 > v0) { v4 = v0; }
    v2 = v2 + v6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
