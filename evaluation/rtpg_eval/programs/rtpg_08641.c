int test_func(void) {
    int v0 = 11;
    int v1 = 86;
    int v2 = 29;
    int v3 = 37;
    int v4 = 14;
    int v5 = 50;
    int v6 = 59;
    int i;
    v2 = v2 - v5;
    v6 = v6 + v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
