int test_func(void) {
    int v0 = 18;
    int v1 = 0;
    int v2 = 82;
    int v3 = 28;
    int v4 = 78;
    int v5 = 36;
    int v6 = 19;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v3;
    }
    v0 = v0 + v3;
    v5 = 33;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
