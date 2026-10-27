int test_func(void) {
    int v0 = 48;
    int v1 = 9;
    int v2 = 60;
    int i;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
