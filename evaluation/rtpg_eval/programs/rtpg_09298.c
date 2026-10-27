int test_func(void) {
    int v0 = 88;
    int v1 = 83;
    int v2 = 86;
    int v3 = 84;
    int v4 = 61;
    int i;
    v1 = v1 + v0;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v4;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
