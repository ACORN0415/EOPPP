int test_func(void) {
    int v0 = 68;
    int v1 = 91;
    int v2 = 62;
    int v3 = 41;
    int v4 = 15;
    int i;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v1;
    }
    v3 = v3 - v4;
    v1 = 70;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
