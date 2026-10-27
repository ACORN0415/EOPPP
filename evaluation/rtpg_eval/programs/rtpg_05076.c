int test_func(void) {
    int v0 = 32;
    int v1 = 21;
    int v2 = 65;
    int v3 = 94;
    int i;
    v2 = v2 - v0;
    if (v2 > v0) { v2 = v0; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
