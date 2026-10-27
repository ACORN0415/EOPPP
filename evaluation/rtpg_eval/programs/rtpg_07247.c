int test_func(void) {
    int v0 = 67;
    int v1 = 20;
    int v2 = 62;
    int v3 = 57;
    int v4 = 56;
    int v5 = 20;
    int i;
    v5 = v5 + v1;
    v4 = 59;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
