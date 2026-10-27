int test_func(void) {
    int v0 = 55;
    int v1 = 54;
    int v2 = 68;
    int i;
    v1 = v1 + v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
