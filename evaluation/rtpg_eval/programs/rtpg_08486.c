int test_func(void) {
    int v0 = 74;
    int v1 = 15;
    int v2 = 3;
    int v3 = 92;
    int v4 = 27;
    int v5 = 28;
    int v6 = 9;
    int v7 = 12;
    int i;
    v7 = v7 - v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
