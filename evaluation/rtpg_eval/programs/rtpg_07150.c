int test_func(void) {
    int v0 = 91;
    int v1 = 40;
    int v2 = 4;
    int i;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 12; i++) {
        v1 = v1 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
