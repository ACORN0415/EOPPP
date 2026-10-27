int test_func(void) {
    int v0 = 38;
    int v1 = 21;
    int v2 = 98;
    int v3 = 25;
    int v4 = 79;
    int v5 = 85;
    int v6 = 91;
    int i;
    if (v4 > v2) { v4 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
