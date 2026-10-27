int test_func(void) {
    int v0 = 100;
    int v1 = 10;
    int v2 = 97;
    int i;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
