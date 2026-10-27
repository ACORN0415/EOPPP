int test_func(void) {
    int v0 = 68;
    int v1 = 69;
    int v2 = 90;
    int v3 = 65;
    int i;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
