int test_func(void) {
    int v0 = 88;
    int v1 = 44;
    int v2 = 34;
    int v3 = 36;
    int v4 = 27;
    int v5 = 26;
    int v6 = 42;
    int i;
    for (i = 0; i < 6; i++) {
        v4 = v4 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
