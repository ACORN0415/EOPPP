int test_func(void) {
    int v0 = 57;
    int v1 = 80;
    int v2 = 59;
    int v3 = 24;
    int v4 = 54;
    int v5 = 75;
    int v6 = 66;
    int i;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v6;
    }
    v6 = 20;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
