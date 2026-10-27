int test_func(void) {
    int v0 = 7;
    int v1 = 92;
    int v2 = 36;
    int v3 = 81;
    int v4 = 11;
    int v5 = 33;
    int v6 = 45;
    int v7 = 45;
    int i;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    v6 = v6 & v2;
    return v0;
}
int main(void) { return test_func(); }
