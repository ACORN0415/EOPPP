int test_func(void) {
    int v0 = 8;
    int v1 = 76;
    int v2 = 90;
    int v3 = 30;
    int v4 = 80;
    int i;
    if (v2 > v1) { v2 = v1; }
    v0 = v0 + v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
