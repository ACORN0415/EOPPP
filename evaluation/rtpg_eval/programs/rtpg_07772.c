int test_func(void) {
    int v0 = 25;
    int v1 = 19;
    int v2 = 46;
    int v3 = 16;
    int v4 = 46;
    int i;
    v2 = 70;
    v0 = v0 - v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
