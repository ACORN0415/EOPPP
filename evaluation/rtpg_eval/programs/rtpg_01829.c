int test_func(void) {
    int v0 = 24;
    int v1 = 83;
    int v2 = 96;
    int v3 = 19;
    int v4 = 39;
    int v5 = 68;
    int v6 = 85;
    int i;
    for (i = 0; i < 6; i++) {
        v4 = v4 + v6;
    }
    v1 = v1 - v2;
    v2 = v2 + v6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
