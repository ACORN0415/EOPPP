int test_func(void) {
    int v0 = 11;
    int v1 = 85;
    int v2 = 86;
    int v3 = 74;
    int v4 = 89;
    int v5 = 93;
    int v6 = 12;
    int i;
    v3 = v3 * 6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
