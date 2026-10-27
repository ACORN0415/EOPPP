int test_func(void) {
    int v0 = 3;
    int v1 = 76;
    int v2 = 64;
    int v3 = 60;
    int v4 = 80;
    int v5 = 44;
    int v6 = 23;
    int v7 = 17;
    int i;
    v7 = v7 - v3;
    v7 = v7 * 9;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
