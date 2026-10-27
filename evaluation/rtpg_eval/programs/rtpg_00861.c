int test_func(void) {
    int v0 = 5;
    int v1 = 17;
    int v2 = 68;
    int v3 = 28;
    int v4 = 66;
    int v5 = 37;
    int v6 = 76;
    int v7 = 84;
    int i;
    v2 = 90;
    v0 = v0 * 9;
    if (v5 > v2) { v5 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
