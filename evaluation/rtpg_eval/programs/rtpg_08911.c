int test_func(void) {
    int v0 = 94;
    int v1 = 13;
    int v2 = 100;
    int i;
    if (v2 > v0) { v2 = v0; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
