int test_func(void) {
    int v0 = 8;
    int v1 = 72;
    int v2 = 69;
    int v3 = 13;
    int v4 = 68;
    int v5 = 55;
    int i;
    v0 = v0 + v3;
    v5 = v5 - v3;
    v5 = 73;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
