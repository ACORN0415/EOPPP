int test_func(void) {
    int v0 = 84;
    int v1 = 45;
    int v2 = 85;
    int v3 = 54;
    int v4 = 16;
    int v5 = 58;
    int v6 = 13;
    int i;
    if (v6 > v4) { v6 = v4; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    v6 = v6 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
