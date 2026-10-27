int test_func(void) {
    int v0 = 26;
    int v1 = 96;
    int v2 = 98;
    int v3 = 44;
    int v4 = 30;
    int v5 = 38;
    int v6 = 2;
    int i;
    v6 = v6 + v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
