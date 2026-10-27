int test_func(void) {
    int v0 = 10;
    int v1 = 86;
    int v2 = 3;
    int v3 = 85;
    int v4 = 13;
    int i;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
