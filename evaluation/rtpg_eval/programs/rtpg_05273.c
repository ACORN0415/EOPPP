int test_func(void) {
    int v0 = 53;
    int v1 = 1;
    int v2 = 9;
    int v3 = 9;
    int v4 = 53;
    int v5 = 40;
    int i;
    v5 = v5 + v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
