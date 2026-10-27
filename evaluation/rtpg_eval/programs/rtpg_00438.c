int test_func(void) {
    int v0 = 81;
    int v1 = 29;
    int v2 = 97;
    int v3 = 74;
    int v4 = 22;
    int i;
    if (v4 > v1) { v4 = v1; }
    v4 = v4 - v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
