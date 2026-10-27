int test_func(void) {
    int v0 = 49;
    int v1 = 20;
    int v2 = 73;
    int v3 = 33;
    int v4 = 16;
    int v5 = 61;
    int v6 = 85;
    int v7 = 43;
    int i;
    v7 = 97;
    if (v3 > v5) { v3 = v5; }
    v5 = v5 + v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
