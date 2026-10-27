int test_func(void) {
    int v0 = 84;
    int v1 = 50;
    int v2 = 22;
    int v3 = 68;
    int v4 = 88;
    int v5 = 35;
    int v6 = 63;
    int i;
    v4 = v4 - v1;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v1;
    }
    v6 = v6 + v6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v2 = v2 % (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
