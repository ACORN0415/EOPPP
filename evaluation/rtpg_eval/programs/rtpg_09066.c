int test_func(void) {
    int v0 = 63;
    int v1 = 46;
    int v2 = 17;
    int v3 = 48;
    int i;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v0;
    }
    v2 = 98;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
