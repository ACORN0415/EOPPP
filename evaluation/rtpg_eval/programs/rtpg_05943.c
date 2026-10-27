int test_func(void) {
    int v0 = 70;
    int v1 = 16;
    int v2 = 55;
    int v3 = 63;
    int v4 = 12;
    int v5 = 10;
    int v6 = 73;
    int v7 = 3;
    int i;
    for (i = 0; i < 14; i++) {
        v4 = v4 + v7;
    }
    v2 = v2 - v7;
    v3 = v3 + v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
