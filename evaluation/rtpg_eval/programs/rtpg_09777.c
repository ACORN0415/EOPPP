int test_func(void) {
    int v0 = 58;
    int v1 = 74;
    int v2 = 58;
    int v3 = 78;
    int v4 = 9;
    int v5 = 36;
    int i;
    v5 = 40;
    v1 = v1 + v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
