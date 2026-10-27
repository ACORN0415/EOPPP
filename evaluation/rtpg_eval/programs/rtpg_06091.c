int test_func(void) {
    int v0 = 62;
    int v1 = 78;
    int v2 = 5;
    int v3 = 14;
    int i;
    v3 = 86;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v0;
    }
    if (v3 > v0) { v3 = v0; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
