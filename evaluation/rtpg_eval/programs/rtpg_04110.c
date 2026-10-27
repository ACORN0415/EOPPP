int test_func(void) {
    int v0 = 78;
    int v1 = 25;
    int v2 = 80;
    int v3 = 45;
    int v4 = 77;
    int v5 = 23;
    int v6 = 18;
    int v7 = 95;
    int i;
    v0 = 20;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
