int test_func(void) {
    int v0 = 5;
    int v1 = 36;
    int v2 = 32;
    int v3 = 40;
    int i;
    v2 = v2 + v0;
    if (v3 > v0) { v3 = v0; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v0 = v0 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
