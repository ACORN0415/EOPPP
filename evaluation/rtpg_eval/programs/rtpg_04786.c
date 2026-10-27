int test_func(void) {
    int v0 = 26;
    int v1 = 12;
    int v2 = 77;
    int v3 = 91;
    int v4 = 60;
    int v5 = 26;
    int i;
    v5 = 7;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
