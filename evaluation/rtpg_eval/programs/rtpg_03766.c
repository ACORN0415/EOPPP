int test_func(void) {
    int v0 = 68;
    int v1 = 31;
    int v2 = 65;
    int v3 = 75;
    int v4 = 69;
    int v5 = 25;
    int v6 = 78;
    int i;
    if (v3 > v5) { v3 = v5; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
