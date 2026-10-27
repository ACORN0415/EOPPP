int test_func(void) {
    int v0 = 8;
    int v1 = 29;
    int v2 = 73;
    int v3 = 91;
    int v4 = 40;
    int v5 = 46;
    int i;
    if (v5 > v0) { v5 = v0; }
    for (i = 0; i < 16; i++) {
        v1 = v1 + v4;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
