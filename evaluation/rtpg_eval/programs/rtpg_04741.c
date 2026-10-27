int test_func(void) {
    int v0 = 19;
    int v1 = 96;
    int v2 = 59;
    int v3 = 91;
    int v4 = 100;
    int v5 = 94;
    int v6 = 10;
    int i;
    v6 = v6 - v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
