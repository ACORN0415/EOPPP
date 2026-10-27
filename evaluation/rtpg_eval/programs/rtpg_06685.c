int test_func(void) {
    int v0 = 25;
    int v1 = 26;
    int v2 = 34;
    int i;
    v2 = 26;
    v2 = v2 * 5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
