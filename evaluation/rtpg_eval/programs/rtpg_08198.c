int test_func(void) {
    int v0 = 100;
    int v1 = 28;
    int v2 = 93;
    int v3 = 29;
    int i;
    if (v3 > v0) { v3 = v0; }
    v3 = v3 | v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
