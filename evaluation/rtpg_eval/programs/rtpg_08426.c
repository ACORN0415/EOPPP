int test_func(void) {
    int v0 = 36;
    int v1 = 64;
    int v2 = 67;
    int v3 = 80;
    int v4 = 89;
    int i;
    v3 = 94;
    if (v3 > v2) { v3 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    v3 = v3 | v4;
    return v0;
}
int main(void) { return test_func(); }
