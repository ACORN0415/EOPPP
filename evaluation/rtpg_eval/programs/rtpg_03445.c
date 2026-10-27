int test_func(void) {
    int v0 = 2;
    int v1 = 32;
    int v2 = 80;
    int v3 = 40;
    int v4 = 72;
    int v5 = 70;
    int i;
    v0 = 68;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
