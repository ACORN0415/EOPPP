int test_func(void) {
    int v0 = 77;
    int v1 = 44;
    int v2 = 22;
    int v3 = 75;
    int v4 = 74;
    int v5 = 23;
    int v6 = 20;
    int i;
    if (v3 > v6) { v3 = v6; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
