int test_func(void) {
    int v0 = 72;
    int v1 = 59;
    int v2 = 27;
    int v3 = 74;
    int v4 = 56;
    int v5 = 28;
    int v6 = 12;
    int v7 = 9;
    int i;
    v6 = v6 * 9;
    if (v1 > v5) { v1 = v5; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
