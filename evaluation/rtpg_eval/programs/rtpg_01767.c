int test_func(void) {
    int v0 = 55;
    int v1 = 89;
    int v2 = 25;
    int v3 = 85;
    int v4 = 79;
    int v5 = 0;
    int v6 = 34;
    int i;
    v1 = v1 + v4;
    v3 = v3 * 5;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
