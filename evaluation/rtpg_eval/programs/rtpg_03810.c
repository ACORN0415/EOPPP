int test_func(void) {
    int v0 = 80;
    int v1 = 15;
    int v2 = 60;
    int v3 = 63;
    int v4 = 51;
    int v5 = 93;
    int v6 = 45;
    int v7 = 89;
    int i;
    v2 = v2 * 6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
