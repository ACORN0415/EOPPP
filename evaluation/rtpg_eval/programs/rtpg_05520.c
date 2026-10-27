int test_func(void) {
    int v0 = 73;
    int v1 = 52;
    int v2 = 77;
    int i;
    v2 = v2 + v1;
    v1 = v1 - v0;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v0 = v0 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
