int test_func(void) {
    int v0 = 70;
    int v1 = 39;
    int v2 = 55;
    int v3 = 33;
    int v4 = 23;
    int v5 = 65;
    int v6 = 34;
    int v7 = 69;
    int i;
    v1 = v1 - v5;
    v7 = v7 * 9;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
