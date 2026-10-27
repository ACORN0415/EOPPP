int test_func(void) {
    int v0 = 51;
    int v1 = 83;
    int v2 = 11;
    int v3 = 62;
    int i;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
