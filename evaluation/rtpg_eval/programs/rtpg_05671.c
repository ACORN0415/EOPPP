int test_func(void) {
    int v0 = 92;
    int v1 = 43;
    int v2 = 20;
    int v3 = 8;
    int v4 = 19;
    int v5 = 100;
    int i;
    v1 = 57;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
