int test_func(void) {
    int v0 = 34;
    int v1 = 37;
    int v2 = 94;
    int v3 = 24;
    int v4 = 58;
    int i;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v3;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
