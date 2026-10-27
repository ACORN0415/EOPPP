int test_func(void) {
    int v0 = 38;
    int v1 = 40;
    int v2 = 83;
    int v3 = 83;
    int v4 = 94;
    int i;
    if (v0 > v2) { v0 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
