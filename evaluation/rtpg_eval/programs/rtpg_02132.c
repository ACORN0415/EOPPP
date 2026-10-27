int test_func(void) {
    int v0 = 18;
    int v1 = 2;
    int v2 = 95;
    int v3 = 99;
    int v4 = 30;
    int i;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
