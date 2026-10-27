int test_func(void) {
    int v0 = 100;
    int v1 = 2;
    int v2 = 72;
    int v3 = 82;
    int v4 = 33;
    int v5 = 90;
    int v6 = 43;
    int v7 = 7;
    int i;
    for (i = 0; i < 17; i++) {
        v5 = v5 + v7;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
