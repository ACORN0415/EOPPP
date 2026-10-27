int test_func(void) {
    int v0 = 40;
    int v1 = 82;
    int v2 = 46;
    int v3 = 58;
    int v4 = 30;
    int v5 = 43;
    int v6 = 96;
    int i;
    v0 = v0 - v5;
    v4 = v4 + v6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
