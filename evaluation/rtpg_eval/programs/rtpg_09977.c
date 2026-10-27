int test_func(void) {
    int v0 = 18;
    int v1 = 43;
    int v2 = 60;
    int v3 = 62;
    int v4 = 80;
    int v5 = 0;
    int v6 = 77;
    int v7 = 16;
    int i;
    if (v7 > v3) { v7 = v3; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
