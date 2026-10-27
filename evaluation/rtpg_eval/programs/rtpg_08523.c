int test_func(void) {
    int v0 = 18;
    int v1 = 2;
    int v2 = 61;
    int v3 = 59;
    int v4 = 76;
    int v5 = 65;
    int v6 = 56;
    int i;
    v6 = v6 - v5;
    if (v6 > v4) { v6 = v4; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
