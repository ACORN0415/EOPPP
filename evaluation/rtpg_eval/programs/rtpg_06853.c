int test_func(void) {
    int v0 = 35;
    int v1 = 97;
    int v2 = 48;
    int v3 = 14;
    int v4 = 57;
    int v5 = 74;
    int i;
    for (i = 0; i < 15; i++) {
        v5 = v5 + v3;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
