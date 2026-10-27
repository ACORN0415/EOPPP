int test_func(void) {
    int v0 = 63;
    int v1 = 35;
    int v2 = 19;
    int v3 = 65;
    int v4 = 45;
    int v5 = 50;
    int i;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
