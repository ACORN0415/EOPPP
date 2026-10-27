int test_func(void) {
    int v0 = 31;
    int v1 = 78;
    int v2 = 24;
    int i;
    v2 = v2 + v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
