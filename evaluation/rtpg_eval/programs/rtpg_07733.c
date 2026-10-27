int test_func(void) {
    int v0 = 14;
    int v1 = 12;
    int v2 = 89;
    int v3 = 73;
    int v4 = 79;
    int v5 = 37;
    int v6 = 17;
    int i;
    v3 = v3 - v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
