int test_func(void) {
    int v0 = 77;
    int v1 = 13;
    int v2 = 54;
    int v3 = 0;
    int v4 = 46;
    int v5 = 35;
    int v6 = 14;
    int v7 = 30;
    int i;
    for (i = 0; i < 20; i++) {
        v5 = v5 + v3;
    }
    v3 = v3 + v6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
