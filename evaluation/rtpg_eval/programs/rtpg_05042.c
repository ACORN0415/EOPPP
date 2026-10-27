int test_func(void) {
    int v0 = 21;
    int v1 = 19;
    int v2 = 16;
    int v3 = 6;
    int v4 = 39;
    int v5 = 0;
    int v6 = 80;
    int i;
    if (v4 > v2) { v4 = v2; }
    v5 = v5 - v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
