int test_func(void) {
    int v0 = 8;
    int v1 = 84;
    int v2 = 35;
    int v3 = 1;
    int v4 = 65;
    int v5 = 26;
    int i;
    if (v5 > v2) { v5 = v2; }
    v0 = v0 * 7;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
