int test_func(void) {
    int v0 = 44;
    int v1 = 58;
    int v2 = 51;
    int v3 = 13;
    int v4 = 16;
    int v5 = 31;
    int v6 = 4;
    int v7 = 57;
    int i;
    v6 = v6 * 2;
    v6 = v6 - v1;
    if (v4 > v1) { v4 = v1; }
    v7 = v7 & v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
