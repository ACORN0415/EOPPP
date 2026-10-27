int test_func(void) {
    int v0 = 69;
    int v1 = 29;
    int v2 = 96;
    int i;
    v2 = 67;
    if (v2 > v2) { v2 = v2; }
    v1 = v1 + v0;
    v0 = v0 ^ v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
