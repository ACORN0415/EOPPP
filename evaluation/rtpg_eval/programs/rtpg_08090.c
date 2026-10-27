int test_func(void) {
    int v0 = 80;
    int v1 = 45;
    int v2 = 90;
    int v3 = 46;
    int i;
    v3 = 90;
    v2 = v2 + v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
