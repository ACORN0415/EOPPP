int test_func(void) {
    int v0 = 46;
    int v1 = 97;
    int v2 = 18;
    int v3 = 63;
    int v4 = 70;
    int i;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
