int test_func(void) {
    int v0 = 6;
    int v1 = 10;
    int v2 = 62;
    int v3 = 57;
    int v4 = 38;
    int v5 = 98;
    int v6 = 4;
    int i;
    v0 = v0 * 4;
    v5 = v5 + v5;
    v1 = v1 % (v4 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
