int test_func(void) {
    int v0 = 30;
    int v1 = 71;
    int v2 = 26;
    int v3 = 86;
    int v4 = 57;
    int v5 = 26;
    int i;
    v4 = v4 * 8;
    v2 = v2 + v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
