int test_func(void) {
    int v0 = 41;
    int v1 = 4;
    int v2 = 74;
    int v3 = 88;
    int v4 = 65;
    int i;
    v0 = v0 - v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
