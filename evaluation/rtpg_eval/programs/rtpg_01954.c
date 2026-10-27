int test_func(void) {
    int v0 = 64;
    int v1 = 31;
    int v2 = 83;
    int v3 = 67;
    int i;
    if (v0 > v3) { v0 = v3; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
