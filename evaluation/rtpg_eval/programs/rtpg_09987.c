int test_func(void) {
    int v0 = 46;
    int v1 = 56;
    int v2 = 24;
    int v3 = 48;
    int v4 = 56;
    int v5 = 6;
    int v6 = 61;
    int v7 = 22;
    int i;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v4 = v4 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
