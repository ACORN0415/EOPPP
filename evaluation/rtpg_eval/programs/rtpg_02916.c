int test_func(void) {
    int v0 = 67;
    int v1 = 78;
    int v2 = 2;
    int v3 = 74;
    int v4 = 54;
    int i;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v0;
    }
    v2 = v2 - v0;
    v4 = v4 % (v3 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
