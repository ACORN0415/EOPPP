int test_func(void) {
    int v0 = 27;
    int v1 = 62;
    int v2 = 100;
    int v3 = 65;
    int v4 = 53;
    int v5 = 38;
    int v6 = 68;
    int v7 = 31;
    int i;
    for (i = 0; i < 14; i++) {
        v7 = v7 + v7;
    }
    v6 = 84;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
