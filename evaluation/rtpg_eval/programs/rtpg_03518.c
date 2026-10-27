int test_func(void) {
    int v0 = 28;
    int v1 = 37;
    int v2 = 82;
    int v3 = 30;
    int v4 = 99;
    int v5 = 73;
    int v6 = 4;
    int v7 = 84;
    int i;
    v3 = v3 + v1;
    v0 = v0 % (v6 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
