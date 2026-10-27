int test_func(void) {
    int v0 = 62;
    int v1 = 61;
    int v2 = 30;
    int v3 = 81;
    int v4 = 66;
    int i;
    v1 = v1 - v0;
    v2 = v2 + v1;
    if (v3 > v1) { v3 = v1; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
