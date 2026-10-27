int test_func(void) {
    int v0 = 92;
    int v1 = 78;
    int v2 = 80;
    int v3 = 83;
    int v4 = 28;
    int v5 = 52;
    int v6 = 6;
    int v7 = 39;
    int i;
    v6 = v6 + v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
