int test_func(void) {
    int v0 = 41;
    int v1 = 92;
    int v2 = 4;
    int v3 = 31;
    int v4 = 88;
    int v5 = 61;
    int v6 = 15;
    int i;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
